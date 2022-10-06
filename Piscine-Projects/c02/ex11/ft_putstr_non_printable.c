/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:06:38 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 13:04:05 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_to_hex(int dec)
{
	char	*hex;
	char	to_print_1;
	char	to_print_2;

	hex = "0123456789abcdef";
	to_print_1 = hex[dec / 16];
	to_print_2 = hex[dec % 16];
	write(1, &to_print_1, 1);
	write(1, &to_print_2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_putchar('\\');
			ft_print_to_hex(str[i]);
		}
		i++;
	}
}

/*
int main(void)
{
	char *string_test1 = "This is totally printable\\*#$%@^&***||//";
	char *string_test2 = " ";
	char *string_test3 = "This is not\n";
	char *string_test4 = "Nor\tthis \v";
	char *string_test5 = "NOT* J_u_s_t kidding, it is:)";

	ft_putstr_non_printable(string_test1);
	write(1, "\n", 1);
	ft_putstr_non_printable(string_test2);
	write(1, "\n", 1);
	ft_putstr_non_printable(string_test3);
	write(1, "\n", 1);
	ft_putstr_non_printable(string_test4);
	write(1, "\n", 1);
	ft_putstr_non_printable(string_test5);
	write(1, "\n", 1);
}
*/