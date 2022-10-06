/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:25:17 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/21 20:03:53 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
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
		int size;
		char to_print;
		size = ft_strlen("Hello!");
		to_print = size +'0';
		write(1,&to_print,1);
		write(1,"\n",1);

		size = ft_strlen("");
		to_print = size +'0';
		write(1,&to_print,1);
		write(1,"\n",1);
		
}
*/