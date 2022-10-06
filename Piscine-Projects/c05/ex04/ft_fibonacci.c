/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:52:36 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 20:57:50 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int main()
// {
// 	int n = 0;
// 	printf("%d\n", ft_fibonacci(n));
// 	n = 1;
// 	printf("%d\n", ft_fibonacci(n));
// 	n = 3;
// 	printf("%d\n", ft_fibonacci(n));
// 	n = 10;
// 	printf("%d\n", ft_fibonacci(n));
// 	n = -2;
// 	printf("%d\n", ft_fibonacci(n));
// 	n = 2;
// 	printf("%d\n", ft_fibonacci(n));
// }