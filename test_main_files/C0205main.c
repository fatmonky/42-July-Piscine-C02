/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain05.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 20:47:53 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *st);

int	main()
{
	//include function to test here.

	char *source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	char *wrong_start = "aBCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	char *wrong_mid = "ABCDEFGHIJKLMN0PQRSTUVWXYZ"; 
	char *wrong_end = "ABCDEFGHIJKLMNOPQRSTUVWXYz"; 
	char *empty= ""; 
  
	int a = ft_str_is_uppercase(source);
	int b = ft_str_is_uppercase(wrong_start);
	int c = ft_str_is_uppercase(wrong_mid);
	int d = ft_str_is_uppercase(wrong_end);
	int e = ft_str_is_uppercase(empty);

	printf("Source: %s\n", source);
	printf("Source: %s\n", wrong_start);
	printf("Source: %s\n", wrong_mid);
	printf("Source: %s\n", wrong_end);
	printf("Source: %s\n", empty);

	printf("Result: %d\n", a);
	printf("Result: %d\n", b);
	printf("Result: %d\n", c);
	printf("Result: %d\n", d);
	printf("Result: %d\n", e);
return 0;

}
