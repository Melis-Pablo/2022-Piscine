/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:57:45 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/29 10:07:46 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src[] = "Append this :)";
	char dest[] = "To this ";
	unsigned int i =0, j = 0;
	while (src[i] != '\0') i++;
	while (dest[j] != '\0') j++;
	unsigned int n = 15;
	
	printf("The total length should be %d\n", j + n);
	write(1, ft_strncat(dest, src, n), j + i);
	write(1,"\n",1);
	i = 0;
	while (dest[i] != '\0') i++;
	printf("The total length is %d\n", i);
	if (j + n > i)
	write(1,"Source string is smaller then desired bytes to copy\n",52);
}
*/