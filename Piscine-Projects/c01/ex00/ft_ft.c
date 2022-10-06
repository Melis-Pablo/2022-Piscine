/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:43:40 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/21 19:54:09 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int main(void)
{
	int *nbr;
	int number;

	number = 12;
	nbr = &number;

	char values[2];
	values[0] = number / 10 + '0';
	values[1] = number % 10 +'0';
 	write(1, &values,2);
	write(1, "\n", 1);
	ft_ft(nbr);
	values[0] = number / 10 + '0';
	values[1] = number % 10 +'0';
	write(1, &values,2);
	write(1, "\n", 1);
}
*/