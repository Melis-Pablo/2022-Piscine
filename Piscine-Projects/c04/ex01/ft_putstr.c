/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 02:00:57 by pmelis            #+#    #+#             */
/*   Updated: 2022/10/03 02:08:20 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		write (1, &c, 1);
		i++;
	}
}

/*
int main(void)
{
	char *test = "Something to test";
	char *test1 ="";
	char *test2 ="Something \0";

	ft_putstr(test);
	write(1,"\n",1);
	ft_putstr(test1);
	write(1,"\n",1);
	ft_putstr(test2);
	write(1,"\n",1);
	
}
*/