/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 02:00:54 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 02:08:07 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
int main(void)
{
	char *test = "Something to test";
	char *test1 ="";
	char *test2 ="Something \0";

	printf("The first size: %d\n", ft_strlen(test));
	printf("The second size: %d\n", ft_strlen(test1));
	printf("The third size: %d\n", ft_strlen(test2));
}
*/