/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:12:36 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/19 20:13:15 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num_1;
	char	num_2;
	char	num_3;

	num_1 = '0';
	while (num_1 <= '7')
	{
		num_2 = num_1 + 1;
		while (num_2 <= '8')
		{
			num_3 = num_2 + 1;
			while (num_3 <= '9')
			{
				write(1, &num_1, 1);
				write(1, &num_2, 1);
				write(1, &num_3, 1);
				if (!(num_1 == '7' && num_2 == '8' && num_3 == '9'))
					write(1, ", ", 2);
				num_3++;
			}
			num_2++;
		}
		num_1++;
	}
}
