/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkobryns <dkobryns@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:04:40 by dkobryns          #+#    #+#             */
/*   Updated: 2022/10/02 22:57:49 by dkobryns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "header.h"

int	main(int argc, char *argv[])
{
	int			fd;
	struct s_de	**dict;
	int			sep;
	char		*num;

	num = malloc(sizeof(char));
	dict = malloc(sizeof(struct s_de *));
	fd = read_arguments(argc, argv, &num);
	if (fd == -1)
		error(1);
	if (!num_is_good(num))
		error(0);
	dict = read_dictionary(fd, dict);
	sep = 0;
	print_num(num, dict, &sep);
	write(1, "\n", 1);
}
