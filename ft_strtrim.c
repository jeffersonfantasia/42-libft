/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:54:57 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/07 17:13:29 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	_ifcharinset(char const *set, char c)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*str;
	size_t		start;
	size_t		len_str;

	if (!s1 || !set)
		return (NULL);
	str = s1;
	start = 0;
	while (_ifcharinset(set, *str) && *str++)
		start++;
	len_str = ft_strlen(s1);
	if (start == len_str)
		return (ft_substr(s1, start, 0));
	str = &s1[len_str - 1];
	while (len_str && _ifcharinset(set, *str--))
		len_str--;
	return (ft_substr(s1, start, len_str - start));
}
