/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:04:57 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 12:54:26 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main(void)
{
	char *string_test1 = "SomeTZingOrOtherOneWayOrNOtxxxx";
	char *string_test2 = "";
	char *string_test3 = "0123457122540000";
	char *string_test4 = "12Monkeys";
	char *string_test5 = "99 ";

	char result;
	result = ft_str_is_numeric(string_test1) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_numeric(string_test2) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_numeric(string_test3) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_numeric(string_test4) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
	result = ft_str_is_numeric(string_test5) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
}
*/