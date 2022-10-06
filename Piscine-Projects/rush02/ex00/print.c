/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkobryns <dkobryns@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:15:14 by dkobryns          #+#    #+#             */
/*   Updated: 2022/10/02 23:32:37 by dkobryns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "header.h"

void	print_amount_and_name(char *left, struct s_de **dict, int *sep, int di)
{
	print_num(left, dict, sep);
	if (*sep)
		write(1, " ", 1);
	ft_print(dict[di]->title);
	*sep = 1;
}

void	print_20_to_99(long num, char *s, struct s_de **dict, int *sep)
{
	int		di;
	char	*c;
	int		temp_sep;

	c = malloc(2 * sizeof(char));
	c[1] = '\0';
	di = find(num * 10, dict);
	if (di == -1)
		error(1);
	if (*sep)
		write(1, " ", 1);
	ft_print(dict[di]->title);
	*sep = 1;
	if (s[1] > '0')
	{
		write(1, "-", 1);
		c[0] = s[1];
		temp_sep = 0;
		print_num(c, dict, &temp_sep);
	}
	free(c);
}

void	three_digits(int len, char *s, struct s_de **dict, int *sep)
{
	int		di;
	int		i;
	char	*left;
	char	*right;

	i = len - 1;
	di = find(power(10, i), dict);
	while (di == -1 && i > len - 3)
	{
		i--;
		di = find(power(10, i), dict);
	}
	if ((di == -1 || i < 2) && (s[len - i - 1] > '0'))
		error(1);
	left = ft_mid(s, 0, len - i);
	right = ft_mid(s, len - i, i);
	if (ft_atoi(left) > 0)
		print_amount_and_name(left, dict, sep, di);
	if (ft_atoi(right) > 0)
		print_num(right, dict, sep);
}

void	two_digits(char *s, struct s_de **dict, int *sep)
{
	char	*c;
	long	num;
	int		di;

	c = malloc(2 * sizeof(char));
	c[1] = '\0';
	c[0] = s[1];
	num = s[0] - '0';
	if (num == 0)
		print_num(c, dict, sep);
	if (num == 1)
	{
		di = find(ft_atoi(s), dict);
		if (di == -1)
			error(1);
		if (*sep)
			write(1, " ", 1);
		ft_print(dict[di]->title);
		*sep = 1;
	}
	if (num > 1)
		print_20_to_99(num, s, dict, sep);
	free(c);
}

void	print_num(char *s, struct s_de **dict, int *sep)
{
	int		i;
	int		di;
	int		len;

	i = 0;
	while (s[i])
		i++;
	len = i;
	if (len > 2)
		three_digits(len, s, dict, sep);
	if (len == 2)
		two_digits(s, dict, sep);
	if (len == 1)
	{
		di = find(ft_atoi(s), dict);
		if (di == -1)
			error(1);
		if (*sep)
			write(1, " ", 1);
		ft_print(dict[di]->title);
		*sep = 1;
	}
}
