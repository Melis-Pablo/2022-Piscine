/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkobryns <dkobryns@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:01:42 by dkobryns          #+#    #+#             */
/*   Updated: 2022/10/02 22:58:29 by dkobryns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_ptrcpy(struct s_de **dest, struct s_de **src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

char	*add_char(char *p, char c[1], int *size)
{
	char	*new_p;

	*size += 1;
	new_p = malloc((*size + 2) * sizeof(char));
	if (new_p == 0)
		error(1);
	if (*size == 1)
	{
		new_p[*size - 1] = c[0];
		new_p[*size] = '\0';
	}
	else
	{
		ft_strcpy(new_p, p);
		new_p[*size - 1] = c[0];
		new_p[*size] = '\0';
		free(p);
	}
	return (new_p);
}

struct s_de	**add_line(struct s_de **p, struct s_de *c, int size)
{
	struct s_de	**new_p;

	new_p = malloc((size + 1) * sizeof(struct s_de *));
	if (new_p == 0)
		return (0);
	if (size == 1)
	{
		new_p[size - 1] = c;
		new_p[size] = 0;
	}
	else
	{
		ft_ptrcpy(new_p, p);
		new_p[size - 1] = c;
		new_p[size] = 0;
		free(p);
	}
	return (new_p);
}

int	find(long n, struct s_de **dict)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (dict[i]->num == n)
			return (i);
		i++;
	}
	return (-1);
}
