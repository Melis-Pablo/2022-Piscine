/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:53:57 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/29 10:06:37 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
int main(void)
{
	char *first = "Equal";
	char *second = "1Equally";
	int decision;

	decision = ft_strcmp(first, second);
	if (decision > 0)
		write(1, "First string is greater than second\n", 36);
	else 
	if (decision < 0)
		write(1, "Second string is greater than first\n", 36);
	else
		write(1, "They are equal\n", 15);
}
*/