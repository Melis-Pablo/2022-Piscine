/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:36:20 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 12:57:40 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char *string_test1 = "This is totally printable\\*#$%@^&***||//";
	char *string_test2 = "";
	char *string_test3 = "This is not\n";
	char *string_test4 = "Nor\tthis";
	char *string_test5 = "NOT* J_u_s_t kidding, it is:)";

	char result;
	result = ft_str_is_printable(string_test1) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_printable(string_test2) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_printable(string_test3) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_printable(string_test4) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
	result = ft_str_is_printable(string_test5) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
}
*/