/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <mgranate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:26:31 by mtavares          #+#    #+#             */
/*   Updated: 2022/09/20 23:40:03 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string_utils.h"

/* This fuction returns a len of a string */

int	ft_strlen(char *str)
{
	int	len;

	len = -1;
	if (!str)
		return (0);
	while (str[++len])
		;
	return (len);
}
/* This function return a pointer to the last ocurrence
	of the char c in a given string */

char	*ft_strrchr(char *str, char c)
{
	int	i;

	i = ft_strlen(str) + 1;
	if (!str)
		return (NULL);
	while (str[--i] != c && i > -1)
		;
	if (i == -1)
		return (NULL);
	return (&str[i]);
}

/* This function return a pointer to the first ocurrence
	of the char c in a given string */

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = -1;
	if (!str)
		return (NULL);
	while (str[++i] != c && str[i])
		;
	if (!str[i])
		return (NULL);
	return (&str[i]);
}

/*
	Function that return true if a char is number
		if i isn't returns false
*/

int	isdig(char c)
{
	return (c >= '0' && c <= '9');
}

t_str	string(void)
{
	static t_str	str = {
		ft_strlen, ft_strncmp, _atoi, ft_strchr, ft_strrchr, strtrim, isdig,
		ft_isspace, itoa, ft_substr, ft_strnstr, ft_isalnum, ft_split
	};

	return (str);
}
