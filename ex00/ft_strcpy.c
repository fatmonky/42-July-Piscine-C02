/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:32:31 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 17:54:38 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (original_dest);
}

/*
int	main(void)
{
	char	*source;
	char	destination[20];

	source = "Hello world";
	ft_strcpy(destination, source);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}*/
