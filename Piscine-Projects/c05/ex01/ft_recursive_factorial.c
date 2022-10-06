/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:52:29 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 21:22:00 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main(void)
// {
// 	int n = 5;
// 	int factorial = ft_recursive_factorial(n);
// 	printf("%d\n", factorial);
// 	n = 1;
// 	factorial = ft_recursive_factorial(n);
// 	printf("%d\n", factorial);
// 	n = 0;
// 	factorial = ft_recursive_factorial(n);
// 	printf("%d\n", factorial);
// 	n = -6;
// 	factorial = ft_recursive_factorial(n);
// 	printf("%d\n", factorial);
// }