/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:47:14 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/21 20:04:53 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*
int main(void)
{
	int tab[] = {9,2,7,4,5};
	int i=0;
	int size = sizeof(tab)/sizeof(tab[0]);
	while (i < size)
	{
		printf("%d:%d ",i,tab[i]);
		i++;
	}
	
	ft_rev_int_tab(tab,size);
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("%d:%d ",i,tab[i]);
		i++;
	}
	printf("\n");
}
*/