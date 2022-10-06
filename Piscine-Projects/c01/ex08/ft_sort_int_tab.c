/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:15:36 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/21 20:12:27 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int main(void)
{
	int tab[] = {9,7,8,10,1,2,4};
	int i=0;
	int size = sizeof(tab)/sizeof(tab[0]);
	while (i < size)
	{
		printf("%d:%d ",i,tab[i]);
		i++;
	}
	ft_sort_int_tab(tab,size);
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