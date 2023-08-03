/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0209main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/03 15:15:50 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *st);

int	main()
{
	//include function to test here.
	char source[] = "salut, comMent tu vas? 42mots quarante-deux; cinquante+et+un"; 
	printf("Source: %s\n", source);
	printf("trans: %s\n", ft_strcapitalize(source));

return 0;

}
