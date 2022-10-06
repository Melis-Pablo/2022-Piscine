/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkobryns <dkobryns@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:25:52 by dkobryns          #+#    #+#             */
/*   Updated: 2022/10/02 23:05:03 by dkobryns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

struct s_de
{
	long	num;
	char	*title;
};
int			read_arguments(int argc, char *argv[], char **num);
struct s_de	**read_dictionary(int fd, struct s_de **dict);
void		print_num(char *s, struct s_de **dict, int *sep);
int			find(long n, struct s_de **dict);
struct s_de	**add_line(struct s_de **p, struct s_de *c, int size);
char		*add_char(char *p, char c[2], int *size);
long		power(long a, long b);
long		ft_atoi(char *str);
char		*ft_mid(char *s, int a, int b);
void		ft_print(char *s);
void		error(int e);
void		parse_line(struct s_de *answer, char *p);
int			num_is_good(char *num);
void		what_for_i_do_this(char *p, int *size);
#endif
