/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:14:42 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/03 15:36:52 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(find))
		return ((char *)str);
	i = 0;
	while (i < (len - 1) && *(str + i) != '\0')
	{
		j = 0;
		while ((i + j) < len && *(str + i + j) == *(find + j))
		{
			if (*(find + j + 1) == '\0')
				return ((char *)(str + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
