/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:05:38 by pteh              #+#    #+#             */
/*   Updated: 2023/08/03 14:55:36 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

int	check_contains(char *str)
{
	if (*str > 96 && *str < 123)
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	char	*originalstr;

	originalstr = str;
	while (*str)
	{
		if (check_contains(str) == 1)
			*str = *str - 32;
		str ++;
	}
	return (originalstr);
}
/*
int	main(void)
{
	char source[] = "abcdefghijklmnopqrstuvwxyz"; 
	char wrong_start[] = "akM987*-`zasdf%@#$%sdfabcdefghijklmnopqrstuvwxyz"; 
	char wrong_mid[] = "zabcdefghijklmasdf%@#$%nopqrstuvwxyz"; 
	char wrong_end[] = "Mabcdefghijklmnopqrstuvwxyz987*-`zasdf%@#$%asdfqwer"; 
	char empty[]= ""; 

	printf("Source: %s\n", source);
	printf("wrong_start: %s\n", wrong_start);
	printf("wrong_mid: %s\n", wrong_mid);
	printf("wrong_end: %s\n", wrong_end);
	printf("empty: %s\n", empty);

	printf("trans: %s\n", ft_strupcase(source));
	printf("transwrong_start: %s\n", ft_strupcase(wrong_start));
	printf("transwrong_mid: %s\n", ft_strupcase(wrong_mid));
	printf("transwrong_end: %s\n", ft_strupcase(wrong_end));
	printf("transempty: %s\n", empty);

return (0);
}*/
