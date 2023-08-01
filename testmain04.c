/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 20:37:15 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *st);

int	main()
{
	//include function to test here.

	char *source = "abcdefghijklmnopqrstuvwxyz"; 
	char *wrong_start = "H0abcdefghijklmnopqrstuvwxy"; 
	char *wrong_mid = "abcdefghij9klmnopqrstuvwxy"; 
	char *wrong_end = "aabcdefghijklmnopqrstuvwxyzbcdefgzH"; 
	char *empty= ""; 
  
	int a = ft_str_is_lowercase(source);
	int b = ft_str_is_lowercase(wrong_start);
	int c = ft_str_is_lowercase(wrong_mid);
	int d = ft_str_is_lowercase(wrong_end);
	int e = ft_str_is_lowercase(empty);

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
