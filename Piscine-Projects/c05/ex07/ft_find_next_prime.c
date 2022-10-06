/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:52:42 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 21:01:22 by pmelis           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && (!ft_is_prime(nb)))
		nb++;
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	int i;
// 	i = -5;
// 	while (++i < 50)
// 		printf("%d: ->>>> %d\n", i, ft_find_next_prime(i));
// }