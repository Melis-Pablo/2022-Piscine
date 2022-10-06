/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:32:28 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 12:56:36 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 65 && str[i] <= 90)))
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
	char *string_test3 = "ABCDEFZXXAOI";
	char *string_test4 = " ADD";
	char *string_test5 = "NOT* ";

	char result;
	result = ft_str_is_uppercase(string_test1) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_uppercase(string_test2) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_uppercase(string_test3) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_uppercase(string_test4) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
	result = ft_str_is_uppercase(string_test5) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
}
*/