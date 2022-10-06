/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 02:01:03 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 02:08:39 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + str[i++] - '0';
	return (sign * result);
}

/*
int main(void)
{
	char *value = "  \t\n -+---4582abc45";
	char *value1 = "---4582abc45";
	char *value2 = "asd4582abc45";
	char *value3 = "";
	int number;
	number = ft_atoi(value);
	printf("this is the number: %d\n", number);
	number = ft_atoi(value1);
	printf("this is the number: %d\n", number);
	number = ft_atoi(value2);
	printf("this is the number: %d\n", number);
	number = ft_atoi(value3);
	printf("this is the number: %d\n", number);
	
}
*/