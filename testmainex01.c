/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 14:38:47 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	//include function to test here.

	char *source = "Helloooooooooo"; 
  
	char destination[20];   
  
	ft_strncpy(destination, source, 5);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return 0;

}
