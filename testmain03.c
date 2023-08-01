/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 19:51:02 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *st);

int	main()
{
	//include function to test here.

	char *source = "0123456789"; 
	char *wrong_start = "H012345678"; 
	char *wrong_mid = "0123_456789"; 
	char *wrong_end = "0123456789H"; 
  
	int a = ft_str_is_numeric(source);
	int b = ft_str_is_numeric(wrong_start);
	int c = ft_str_is_numeric(wrong_mid);
	int d = ft_str_is_numeric(wrong_end);

	printf("Source: %s\n", source);
	printf("Source: %s\n", wrong_start);
	printf("Source: %s\n", wrong_mid);
	printf("Source: %s\n", wrong_end);

	printf("Result: %d\n", a);
	printf("Result: %d\n", b);
	printf("Result: %d\n", c);
	printf("Result: %d\n", d);
return 0;

}
