/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:52:33 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 21:21:18 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
	{
		return (!power);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int main(void)
// {
// 	int n = 5;
// 	int nb = -2;
// 	int factorial = ft_recursive_power(nb,n);
// 	printf("%d\n", factorial);
// 	n = 1;
// 	factorial = ft_recursive_power(nb,n);
// 	printf("%d\n", factorial);
// 	n = 0;
// 	factorial = ft_recursive_power(nb,n);
// 	printf("%d\n", factorial);
// 	n = -6;
// 	factorial = ft_recursive_power(nb,n);
// 	printf("%d\n", factorial);
// }