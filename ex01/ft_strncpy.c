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

	//while 

	while ((*src != '\0') && (counter <= n -1))
	{ 
		*dest = *src;
		dest++;
		src++;
		counter++;
		if (counter < n)//to amend tomorrow 3 Aug.


	}
	if (counter < n)
		
	*dest = *src;
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
	source = "Hell";
	ft_strncpy(destination, source, 5);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	source = "He\0ll";
	ft_strncpy(destination, source, 5);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}
