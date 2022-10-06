/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramusho <eramusho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:50:18 by eramusho          #+#    #+#             */
/*   Updated: 2022/10/06 16:47:22 by eramusho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		counter;
	int		new_len;

	if (size <= 0)
		return (NULL);
	new_len = ft_strlen(sep) * (size - 1);
	counter = 0;
	while (counter < size)
	{
		new_len += ft_strlen(strs[counter]);
		counter++;
	}
	new_len++;
	new_str = (char *) malloc(sizeof(char) * new_len);
	ft_strcpy(new_str, strs[0]);
	counter = 1;
	while (counter < size)
	{
		ft_strcat(new_str, sep);
		ft_strcat(new_str, strs[counter]);
		counter++;
	}
	return (new_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*string[5];

	string[0] = "Hello";
	string[1] = "world";
	string[2] = "from";
	string[3] = "Ermal";
	printf("%s\n", ft_strjoin(4, string, " && "));
	return (0);
}
*/