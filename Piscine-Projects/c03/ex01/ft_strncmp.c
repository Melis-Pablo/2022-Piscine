/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:55:11 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/29 10:11:16 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && (i + 1 < n) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
	char *first = "Equal";
	char *second = "Eqzually";
	int decision;

	decision = ft_strncmp(first, second,2);
	if (decision > 0)
		write(1, "First string is greater than second\n", 36);
	else 
	if (decision < 0)
		write(1, "Second string is greater than first\n", 36);
	else
		write(1, "They are equal\n", 15);
}
*/