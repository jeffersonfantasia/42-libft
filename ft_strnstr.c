/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:14:42 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/07 18:29:39 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	len_find;

	if (!*find)
		return ((char *)str);
	if (!*str)
		return (NULL);
	len_find = ft_strlen(find);
	while (len-- >= len_find && *str)
	{
		if (*str == *find && ft_strncmp(str, find, len_find) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
