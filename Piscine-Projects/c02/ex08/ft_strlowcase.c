/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:56:18 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 12:59:25 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char string_test1[] = "SomEThing to LOWERCase:)";
	int	i;

	i = 0;
	while (string_test1[i] != '\0')
	{
		i++;
	}
	
	write(1, ft_strlowcase(string_test1), i);
	write(1, "\n", 1);
}
*/