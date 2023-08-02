/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:02:32 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 10:52:58 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_contains(char *str)
{
	if (*str > 31 && *str < 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_printable(char *str)
{

	while (*str) //check str's value not '\0', indicating end of the sentence. 
		{//for each str value in string, feed *str into check_contains function.
		 //if check_contains returns true,
		 //move pointer str to next value in string i.e. str++;
		if (check_contains(str) == 1)
			{
			str++;
			} else
			{
				return (0);
			}
		}
// return (1) if pointer at end of string.
return (1);
}
