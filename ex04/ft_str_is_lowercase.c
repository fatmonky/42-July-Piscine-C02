/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:54:48 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 20:38:53 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	char_counter;

	char_counter = 0;
	while (*str != '\0')
	{
		if ((int)*str > 96 && (int)*str < 123)
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
