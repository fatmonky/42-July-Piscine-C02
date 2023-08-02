/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain07.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:58 by pteh              #+#    #+#             */
/*   Updated: 2023/08/02 11:44:32 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *st);

int	main()
{
	//include function to test here.

	char source[] = "M987*-`zasdf%@#$%"; 
	char wrong_start[] = "asdfkM987*-`zasdf%@#$%"; 
	char wrong_mid[] = "M987*-`zasdf%@#$%"; 
	char wrong_end[] = "M987*-`zasdf%@#$%asdfqwer"; 
	char empty[]= ""; 

	printf("Source: %s\n", source);
	printf("Source: %s\n", wrong_start);
	printf("Source: %s\n", wrong_mid);
	printf("Source: %s\n", wrong_end);
	printf("Source: %s\n", empty);

	ft_strupcase(source);
	ft_strupcase(wrong_start);
	ft_strupcase(wrong_mid);
	ft_strupcase(wrong_end);
	ft_strupcase(empty);

	printf("trans: %s\n", source);
	printf("trans: %s\n", wrong_start);
	printf("trans: %s\n", wrong_mid);
	printf("trans: %s\n", wrong_end);
	printf("trans: %s\n", empty);


return 0;

}
