/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramusho <eramusho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:45:42 by eramusho          #+#    #+#             */
/*   Updated: 2022/10/06 16:44:28 by eramusho         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(void)
{
	int	*ptr;
	int	i;
	int	min;
	int	max;
	int	counter;

	min = -2;
	max = 5;
	ptr = ft_range(min, max);
	counter = min;
	i = 0;
	while (counter < max)
	{
		printf("%d\n", ptr[i]);
		counter++;
		i++;
	}
	return (0);
}
*/