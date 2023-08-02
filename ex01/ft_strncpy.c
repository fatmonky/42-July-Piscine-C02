/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:20:48 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 18:59:33 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	char	*original_dest;

	counter = 0;
	original_dest = dest;
	while ((*src != '\0') && (counter <= n -1))
	{ 
		*dest = *src;
		dest++;
		src++;
		counter++;
		if ((counter < n) && (*src == '\0'))
				while (counter <= n - 1)
					{
					*dest = '\0';
					dest++; //this leads to segmentation fault. Need a counter here to help me track.
					counter++; // this counter leads to a counter that fills up dest at most to n. how to fill up rest of dest with null?
				}
	}
	return (original_dest);
}

int	main(void)
{
	char	*source;
	char	destination[20];

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
}
