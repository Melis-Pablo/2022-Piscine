/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkobryns <dkobryns@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:16:15 by dkobryns          #+#    #+#             */
/*   Updated: 2022/10/02 21:43:29 by dkobryns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#include <stdio.h>

int	get_separator_index(char *p)
{
	int	i;

	i = 0;
	while (p[i] != ':' & p[i] != '\0')
		i++;
	if (p[i] != ':')
		return (0);
	return (i);
}

long	get_number(char *p)
{
	int		i;
	long	n;

	i = 0;
	while (p[i] == ' ')
		i++;
	n = 0;
	while (p[i] >= '0' && p[i] <= '9' && n <= 4294967295)
	{
		n = n * 10 + (p[i] - '0');
		i++;
	}
	return (n);
}

int	get_number_name(char *p, int i)
{
	int	text_start;

	while (p[i] == ' ')
		i++;
	text_start = i;
	i = 0;
	while (p[text_start + i] >= ' ')
	{
		p[i] = p[text_start + i];
		i++;
	}
	while (p[text_start + i] <= ' ')
	{
		p[i] = '\0';
		i--;
	}
	return (i);
}

void	parse_line(struct s_de *answer, char *p)
{
	int		i;
	int		sep;
	long	n;

	sep = get_separator_index(p);
	if (!sep)
	{
		answer->num = -1;
		return ;
	}
	n = get_number(p);
	if (n > 4294967295)
	{
		answer->num = -1;
		return ;
	}
	i = get_number_name(p, sep + 1);
	if (i < 0)
	{
		answer->num = -1;
		return ;
	}
	answer->num = n;
	answer->title = p;
}
