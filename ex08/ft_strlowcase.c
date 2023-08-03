/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:14:33 by pteh              #+#    #+#             */
/*   Updated: 2023/08/03 10:11:08 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <string.h>
#include <stdio.h>*/

int	check_contains(char *str)
{
	if (*str > 64 && *str < 91)
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (check_contains(str) == 1)
			*str = *str + 32;
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char source[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	char wrong_start[] = "asdfkM987*-`zasdf%@#$%ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	char wrong_mid[] = "MABCDEFGHIJK987*-`zasdf%@#$%LMNOPQRSTUVWXYZ"; 
	char wrong_end[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZM987*-`zasdf%@#$%asdfqwer"; 
	char empty[]= ""; 

	printf("Source: %s\n", source);
	printf("wrong_start: %s\n", wrong_start);
	printf("wrong_mid: %s\n", wrong_mid);
	printf("wrong_end: %s\n", wrong_end);
	printf("empty: %s\n", empty);

	ft_strlowcase(source);
	ft_strlowcase(wrong_start);
	ft_strlowcase(wrong_mid);
	ft_strlowcase(wrong_end);
	ft_strlowcase(empty);

	printf("trans: %s\n", source);
	printf("transwrong_start: %s\n", wrong_start);
	printf("transwrong_mid: %s\n", wrong_mid);
	printf("transwrong_end: %s\n", wrong_end);
	printf("transempty: %s\n", empty);

return (0);
}*/
