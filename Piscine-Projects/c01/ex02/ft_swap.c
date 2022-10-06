/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:24:26 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/21 19:58:44 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
	int a,b;
	a=12;
	b=-5;
	printf("a is %d ",a);
	printf("b is %d\n",b);
	ft_swap(&a, &b);
	printf("a is %d ",a);
	printf("b is %d\n",b);
	return (0);
}
*/