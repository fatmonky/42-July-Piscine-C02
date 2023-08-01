/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:54:06 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 18:23:31 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	char_counter;
	int	str_counter;

	char_counter = 0;
	str_counter = 0;
	while (*str != '\0')
	{
		if (((int)*str > 64 && (int)*str < 91)
			|| ((int)*str > 96 && (int)*str < 123)
			|| ((int)*str == 0))
		{
			char_counter++;
		}
		else
		{
			char_counter = 0;
		}
		str++;
		str_counter++;
	}
	if (char_counter == str_counter)
		return (1);
	else
		return (0);
}
