/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:50:56 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 12:51:29 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	temp_n;

	temp_n = n;
	i = 0;
	while (i < temp_n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < temp_n)
	{
		dest[i] = '\0';
			i++;
	}
	return (dest);
}

/*
int main(void)
{
	char *src = "Some";
	int	i;
	int n;
	int count_nulls;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	n = 8;
	char dest[n];
	write(1,dest, n);
	write(1,"\n",1);
	ft_strncpy(dest,src,n);
	write(1,dest, n);
	write(1,"\n",1);
	printf("Size of source array: %d\n", i);
	printf("Size of destination array: %d\n", n);
	i = 0;
	count_nulls = 0;
	while (i < n)
	{
		if (dest[i] == '\0')
		count_nulls++;
		i++;
	}
	printf("Number of zeros to fill destination array: %d\n", count_nulls);	
}
*/