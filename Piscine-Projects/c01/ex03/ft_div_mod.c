/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:34:37 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/21 20:00:34 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main(void)
{
	int div, mod;
	div = -2147483648;
	mod = -2147483648;
	ft_div_mod(10,2,&div,&mod);
	printf("div = %d \n mod = %d\n", div, mod);
	div = -2147483648;
	mod = -2147483648;
	ft_div_mod(10,4,&div,&mod);
    printf("div = %d \n mod = %d\n", div, mod);
	div = -2147483648;
	mod = -2147483648;
	ft_div_mod(10,0,&div,&mod);
	printf("div = %d \n mod = %d\n", div, mod);
}
*/