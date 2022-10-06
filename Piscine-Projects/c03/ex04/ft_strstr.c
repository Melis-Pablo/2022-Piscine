/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:59:12 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/29 10:08:31 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/

int	ft_compare(char *str, char *to_find, int index)
{
	int	i;

	i = 0;
	while (str[index] && to_find[i])
	{
		if (str[index] != to_find[i])
			return (0);
		i++;
		index++;
	}
	return (to_find[i] == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0] && ft_compare(str, to_find, i))
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*
int main(void)
{
	char src[] = "Search here:)";
	char to_find[] = "earch here:) ";
	unsigned int i =0;
	while (src[i] != '\0') i++;
 
	char *found = ft_strstr(src, to_find);
	i = 0;
	if (found != NULL){
	    	while (found[i] != '\0') i++;
	}
	if (i > 0)
		write(1, found, i);
	else
		write(1, "It's not there", 14);
	write(1,"\n",1);
}
*/