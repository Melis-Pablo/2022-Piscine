/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkobryns <dkobryns@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:16:07 by dkobryns          #+#    #+#             */
/*   Updated: 2022/10/02 21:31:29 by dkobryns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "header.h"

int	read_arguments(int argc, char *argv[], char **num)
{
	int	fd;

	if (argc > 3)
		error(0);
	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		*num = argv[2];
	}
	if (argc == 2)
	{
		fd = open("numbers.dict", O_RDONLY);
		*num = argv[1];
	}
	return (fd);
}

int	num_is_good(char *num)
{
	int		i;
	long	n;

	i = 0;
	while (num[i] != '\0' && i < 11)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
		i++;
	}
	if (i == 11)
		return (0);
	n = ft_atoi(num);
	if (n > 4294967295)
		return (0);
	return (1);
}
