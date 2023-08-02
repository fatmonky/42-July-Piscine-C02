/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0208main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 13:14:16 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *st);

int	main()
{
	//include function to test here.

	char source[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	char wrong_start[] = "AZZZZM987*-`zasdf%@#$%"; 
	char wrong_mid[] = "m987*-`PPPPP%@#$%"; 
	char wrong_end[] = "m987*-`zasdf%@#$%UUUUEEEr"; 
	char empty[]= ""; 

	printf("Source: %s\n", source);
	printf("Source: %s\n", wrong_start);
	printf("Source: %s\n", wrong_mid);
	printf("Source: %s\n", wrong_end);
	printf("Source: %s\n", empty);

	ft_strlowcase(source);
	ft_strlowcase(wrong_start);
	ft_strlowcase(wrong_mid);
	ft_strlowcase(wrong_end);
	ft_strlowcase(empty);

	printf("trans: %s\n", source);
	printf("trans: %s\n", wrong_start);
	printf("trans: %s\n", wrong_mid);
	printf("trans: %s\n", wrong_end);
	printf("trans: %s\n", empty);


return 0;

}
