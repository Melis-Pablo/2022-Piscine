/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eramusho <eramusho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:34:15 by eramusho          #+#    #+#             */
/*   Updated: 2022/10/06 16:44:43 by eramusho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		counter;

	counter = 0;
	while (src[counter])
		counter++;
	dup = (char *)malloc(sizeof(char) * counter);
	counter = 0;
	if (!dup)
		return (dup);
	while (src[counter])
	{
		dup[counter] = src[counter];
		counter++;
	}
	dup[counter] = '\0';
	return (dup);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*name = "Ermal";
	char	*dup1;
	char	*dup2;

	dup1 = strdup(name);
	dup2 = ft_strdup(name);
	printf("strdup: %s\n", dup1);
	printf("ft_strdup: %s\n", dup2);
	return (0);
}
*/