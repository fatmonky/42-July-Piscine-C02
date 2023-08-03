/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:34:31 by pteh              #+#    #+#             */
/*   Updated: 2023/08/03 10:55:21 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

int	check_contains_numbers(char *str)
{
	if (*str > 47 && *str < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_contains_letters(char *str)
{
	if ((*str > 96 && *str < 123)
		|| (*str > 64 && *str < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*ticker;

	while (*str)
	{
		ticker = str;
		if ((check_contains_letters(str) == 1)
			|| (check_contains_numbers(str) == 1))
		{
			while ((check_contains_letters(ticker) == 1)
				|| (check_contains_numbers(ticker) == 1))
			{
				ticker++;
			}
			if (check_contains_letters(str) == 1)
				*str = *str - 32;
			str = ticker;
		}
		else
		{
			str++;
		}
	}
	return (str);
}
