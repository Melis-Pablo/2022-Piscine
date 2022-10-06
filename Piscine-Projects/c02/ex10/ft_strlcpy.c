/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:56:11 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/25 13:02:53 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
int main(void)
{
	char string_test1[] = "This is ";
	unsigned int	i;
	unsigned int size;

	i = 0;
	while (string_test1[i] != '\0')
	{
		i++;
	}
	size = 10;
	if (size > i)
		size = i + 1;
	char dest[size];
	ft_strlcpy(dest, string_test1, size);
	printf("Size is %d\n", i);
	write(1, dest, size);
	write(1, "\n", 1);
	printf("Size of copied string is %d\n", size);
}
*/