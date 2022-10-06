/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:52:31 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 21:20:32 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power--)
		result *= nb;
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	int n = 5;
// 	int nb = -3;
// 	int factorial = ft_iterative_power(nb,n);
// 	printf("%d\n", factorial);
// 	n = 1;
// 	factorial = ft_iterative_power(nb,n);
// 	printf("%d\n", factorial);
// 	n = 0;
// 	factorial = ft_iterative_power(nb,n);
// 	printf("%d\n", factorial);
// 	n = -6;
// 	factorial = ft_iterative_power(nb,n);
// 	printf("%d\n", factorial);
// }