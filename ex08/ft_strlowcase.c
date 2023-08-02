/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:14:33 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 13:21:55 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
