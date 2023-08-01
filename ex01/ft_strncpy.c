/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:20:48 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 14:45:46 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((*src != '\0') && (counter <= n -1))
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	return (dest);
}
