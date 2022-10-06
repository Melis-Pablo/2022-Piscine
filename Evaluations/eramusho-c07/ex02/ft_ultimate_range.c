/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramusho <eramusho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:56:14 by eramusho          #+#    #+#             */
/*   Updated: 2022/10/06 16:45:43 by eramusho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len_array;
	int	counter;
	int	num;
	int	*array;

	len_array = max - min;
	num = min;
	counter = 0;
	array = NULL;
	if (min >= max)
	{
		array = NULL;
		return (array);
	}
	array = (int *)malloc(sizeof(int) * len_array);
	if (!array)
		return (0);
	while (num < max)
	{
		array[counter] = num;
		counter++;
		num++;
	}
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = -2;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/