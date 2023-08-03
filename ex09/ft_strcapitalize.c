/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:34:31 by pteh              #+#    #+#             */
/*   Updated: 2023/08/03 15:15:21 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h>
#include <string.h>*/

int	check_contains_numbers(char *c)
{
	if (*c > 47 && *c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_contains_letters(char *c)
{
	if ((*c > 96 && *c < 123)
		|| (*c > 64 && *c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	check_contains_caps(char *c)
{
	if (*c > 64 && *c < 91)
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
	char	*original_str;

	original_str = str;
	while (*str)
	{
		ticker = str;
		if ((check_contains_letters(str) == 1)
			|| (check_contains_numbers(str) == 1))
		{
			while ((check_contains_letters(ticker) == 1)
				|| (check_contains_numbers(ticker) == 1))
			{
				if (check_contains_caps(ticker) == 1)
					*ticker = *ticker + 32;
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
	return (original_str);
}
