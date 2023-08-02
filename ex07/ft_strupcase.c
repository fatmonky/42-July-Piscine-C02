/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:05:38 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 13:07:04 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_contains(char *str)
{
	if (*str > 96 && *str < 122)
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	while (*str)
	{
		if (check_contains(str) == 1)
			*str = *str - 32;
		str ++;
	}
	return (str);
}
