/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:58:05 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/21 20:01:57 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	box_a;
	int	box_b;

	box_a = *a;
	box_b = *b;
	if (box_b != 0)
	{
		*a = box_a / box_b;
		*b = box_a % box_b;
	}
}

/*
int main(void)
{
	int a,b;
	a = 9;
	b =2;
	ft_ultimate_div_mod(&a,&b);
	printf("a div b = %d, a mod b = %d\n",a,b);
	a = 10;
	b =0;
	ft_ultimate_div_mod(&a,&b);
	printf("a div b = %d, a mod b = %d\n",a,b);
}
*/