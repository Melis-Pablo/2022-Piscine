/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:38:34 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/21 19:55:51 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
int main(void)
{
	int *********nbr1;
	int ********nbr2;
	int *******nbr3;
	int ******nbr4;
	int *****nbr5;
	int ****nbr6;
	int ***nbr7;
	int **nbr8;
	int *nbr9;
	
	int number;
	number = 12;
	
	nbr9 = &number;
	nbr8 = &nbr9;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;

	char values[2];
	values[0] = number / 10 + '0';
	values[1] = number % 10 +'0';
 	write(1, &values,2);
	write(1, "\n", 1);

	ft_ultimate_ft(nbr1);
	
	values[0] = number / 10 + '0';
	values[1] = number % 10 +'0';
	write(1, &values,2);
	write(1, "\n", 1);
}
*/