/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/01 18:35:06 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *st);

int	main()
{
	//include function to test here.

	char *source = "Helloooooooooo"; 
	char *wrong_start = "_Helloooooooooo"; 
	char *wrong_mid = "_Hell*ooooooooo"; 
	char *wrong_end = "_Hellooooooooo%"; 
  
	int a = ft_str_is_alpha(source);
	int b = ft_str_is_alpha(wrong_start);
	int c = ft_str_is_alpha(wrong_mid);
	int d = ft_str_is_alpha(wrong_end);

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
