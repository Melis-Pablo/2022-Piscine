/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:52:40 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 21:00:57 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2 && n <= 46341)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = -5;
// 	while (++i < 50)
// 	{
// 		if (ft_is_prime(i) == 1)
// 		{
// 			printf("%d is prime\n", i);
// 			printf("\n");
// 		}
// 		else
// 		{
// 			printf("---not-----");
// 			printf("\n");
// 		}
// 	}
// }
