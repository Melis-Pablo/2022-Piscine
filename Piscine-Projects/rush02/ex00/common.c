/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkobryns <dkobryns@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:11:47 by dkobryns          #+#    #+#             */
/*   Updated: 2022/10/02 21:31:57 by dkobryns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"
#include <unistd.h>

long	power(long a, long b)
{
	long	n;

	n = a;
	if (b == 0)
		return (1);
	while (b > 1)
	{
		n *= a;
		b--;
	}
	return (n);
}

long	ft_atoi(char *str)
{
	int	num;

	num = 0;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

char	*ft_mid(char *s, int a, int b)
{
	int		i;
	char	*c;

	i = 0;
	c = malloc(11 * sizeof(char));
	while (i < b)
	{
		c[i] = s[a + i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

void	ft_print(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	error(int e)
{
	if (e == 0)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	if (e == 1)
	{
		write(1, "Dict Error\n", 11);
		exit (0);
	}
}
