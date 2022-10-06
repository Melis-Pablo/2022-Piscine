/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:05:12 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 13:01:29 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap_it;

	i = 0;
	cap_it = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (cap_it && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!cap_it && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			cap_it = 0;
		}
		else
			cap_it = 1;
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char string_test1[] = "salut, comment tu vas ?
	 42mots quarante-deux; cinquante+et+un";
	int	i;

	i = 0;
	while (string_test1[i] != '\0')
	{
		i++;
	}
	
	write(1, string_test1, i);
	write(1, "\n", 1);
	write(1, ft_strcapitalize(string_test1), i);
	write(1, "\n", 1);
}
*/