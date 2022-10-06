/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:00:17 by pmelis            #+#    #+#             */
/*   Updated: 2022/09/28 22:11:41 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	j;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (dest[j])
		j++;
	while (src[i] && j + i < size - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (i < size)
		dest[j + i] = '\0';
	if (j > size)
		return (src_len + size);
	return (j + src_len);
}

/*
int main(void)
{
	char src[] = "Append this :)";
	char dest[20] = "To this";
	unsigned int i =0, j = 0;
	unsigned int size = 20;
	while (src[i] != '\0') i++;
	while (dest[j] != '\0') j++;
	write(1,dest, size);
	printf("The necessary size should be %d\n", i+j+1);
	printf("I will give it %d places to copy too\n", size);	
	printf("The new string length is %d\n", ft_strlcat(dest,src,size));	
	printf("\n");
	ft_strlcat(dest, src, size);
	printf("%s", dest);
}
*/