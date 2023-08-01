/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:44:07 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 20:45:11 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	char_counter;

	char_counter = 0;
	while (*str != '\0')
	{
		if ((int)*str > 64 && (int)*str < 91)
		{
			char_counter++;
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (1);
}
