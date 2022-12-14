/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:26:51 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/22 17:01:41 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <stdlib.h>
# include <limits.h>

typedef struct s_str	t_str;

struct s_str
{
	int		(*len)(char *s);
	int		(*strncmp)(char *s1, char *s2, size_t n);
	long	(*atoi)(char *s);
	char	*(*strchr)(char *s, char c);
	char	*(*strrchr)(char *s, char c);
	char	*(*trim)(char *s1, char *set);
	int		(*isdig)(char c);
	int		(*isspace)(char c);
	char	*(*itoa)(char *s, int *maxdig, int counter, int n);
	char	*(*substr)(char *s, unsigned int start, size_t len);
	char	*(*contains)(char *big, char *little, size_t len);
	int		(*ft_isalnum)(char c);
	char	**(*ft_split)(char *s, char c);

};

t_str	string(void);

#endif
