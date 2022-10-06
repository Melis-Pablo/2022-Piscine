/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:52:38 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 20:59:59 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n * n <= nb && nb > 0)
	{
		if (n * n == nb)
			return (n);
		else if (n >= 46341)
			return (0);
		n++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int i;
// 	i = -5;
// 	while (++i < 50)
// 		printf("%d: (%d);\n", i, ft_sqrt(i));
// }