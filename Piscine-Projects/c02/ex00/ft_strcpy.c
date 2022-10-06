/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:43:23 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 12:46:03 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char *src = "Something to copy:)";
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	char dest[i];
	write(1,dest, i+1);
	write(1,"\n",1);
	ft_strcpy(dest,src);
	write(1,dest, i+1);
	write(1,"\n",1);
}
*/