/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:20:48 by pteh              #+#    #+#             */
/*   Updated: 2023/08/03 09:48:28 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	char			*original_dest;

	counter = 0;
	original_dest = dest;
	while ((*src != '\0') && (counter < n))
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	while (counter < n)
	{
		*dest = '\0';
		counter++;
	}
	return (original_dest);
}

/*
int	main(void)
{
	//alternative version: 
	//replace lines 25 - 27 with: dest[counter] = src[counter];
	//replace ln32 with: dest[counter] = '\0'
	//replace 35 with: return (dest);

		char	*source;
	char	destination[20] = "1241234123412341234";

	source = "Hellooo";
	ft_strncpy(destination, source, 5);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	strncpy(destination, source, 5);
	printf("StrncpyDestination: %s\n", destination);

	source = "Hell";
	ft_strncpy(destination, source, 5);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	strncpy(destination, source, 5);
	printf("StrncpyDestination: %s\n", destination);

	source = "He\0ll";
	ft_strncpy(destination, source, 5);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	strncpy(destination, source, 5);
	printf("StrncpyDestination: %s\n", destination);
	return (0);
}*/
