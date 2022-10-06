/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkobryns <dkobryns@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:14:45 by dkobryns          #+#    #+#             */
/*   Updated: 2022/10/02 23:29:48 by dkobryns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "header.h"

struct s_de	**add_to_dict(char *p, struct s_de **dict, int *dict_size)
{
	struct s_de	*e;

	*dict_size = *dict_size + 1;
	e = malloc(sizeof(struct s_de));
	if (e == 0)
		error(1);
	parse_line(e, p);
	if (e->num != -1)
		dict = add_line(dict, e, *dict_size);
	return (dict);
}

struct s_de	**read_dictionary(int fd, struct s_de **dict)
{
	char	c[1];
	int		size;
	int		*dict_size;
	char	*p;

	size = 0;
	dict_size = malloc(sizeof(int));
	while (read(fd, c, 1))
	{
		if (c[0] != '\n' && c[0] != '\r')
			p = add_char(p, c, &size);
		else
		{
			if (size > 0)
			{
				what_for_i_do_this(p, &size);
				dict = add_to_dict(p, dict, dict_size);
				size = 0;
			}
		}
	}
	close(fd);
	return (dict);
}
