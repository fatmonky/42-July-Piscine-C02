/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:54:06 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 15:14:07 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		//compare pointer deref to each value in string literal 
		if (((int)*str > 64 && (int)*str < 91)
			|| ((int)*str > 96 && (int)*str < 123)
			|| ((int)str == 0))
		{
			return('1');
		} else
		{
			return('0');
		}
		str++;
	}
}
