/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:56:52 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/29 10:07:18 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
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
	char dest[] = "To this";
	int i =0, j = 0;
	while (src[i] != '\0') i++;
	while (dest[j] != '\0') j++;
	printf("The total length should be %d\n", i+j);
	write(1, ft_strcat(dest, src), i+j);
	write(1,"\n",1);
	j = 0;
	while (dest[j] != '\0') j++;
	printf("The total length is %d\n", j);
	
}
*/