/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:41:09 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 12:58:26 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char string_test1[] = "SomEThing to uppercase:)";
	int	i;

	i = 0;
	while (string_test1[i] != '\0')
	{
		i++;
	}
	
	write(1, ft_strupcase(string_test1), i);
	write(1, "\n", 1);
}
*/