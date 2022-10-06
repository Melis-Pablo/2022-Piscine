/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:32:01 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/19 20:13:10 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(int x)
{
	int	low;
	int	high;

	high = x / 10;
	low = x % 10;
	ft_putchar(high + '0');
	ft_putchar(low + '0');
}

void	ft_print_comb2(void)
{
	int	num_1;
	int	num_2;

	num_1 = 00;
	while (num_1 <= 98)
	{
		num_2 = num_1 + 1;
		while (num_2 <= 99)
		{
			ft_print_num(num_1);
			write(1, " ", 1);
			ft_print_num(num_2);
			if (!(num_1 == 98 && num_2 == 99))
				write(1, ", ", 2);
			num_2++;
		}
		num_1++;
	}
}
