/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C0209main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 13:39:54 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *st);

int	main()
{
	//include function to test here.
	char source[] = "salut, comment tu vas? 42mots quarante-deux; cinquante+et+un"; 
	printf("Source: %s\n", source);
	ft_strcapitalize(source);
	printf("trans: %s\n", source);

return 0;

}
