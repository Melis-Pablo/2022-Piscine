/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:12:19 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 12:55:47 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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
	char *string_test3 = "onlylowerzzzzz";
	char *string_test4 = " lower";
	char *string_test5 = "lower12 ";

	char result;
	result = ft_str_is_lowercase(string_test1) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_lowercase(string_test2) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_lowercase(string_test3) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_lowercase(string_test4) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
	result = ft_str_is_lowercase(string_test5) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
}
*/