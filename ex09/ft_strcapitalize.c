/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:34:31 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 15:52:24 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		|| (*str > 47 && *str < 58))
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
	char	*counter;

	while (*str)
	{
		counter = str;
		if ((check_contains_letters(str) == 1)
			&& (check_contains_numbers(str) != 1))
		{
			while (check_contains_letters(counter) == 1)
			{
				counter++;
			}
			*str = *str - 32;
			str = counter;
		}
		else
		{
			str++;
		}
	}
	return (str);
}
