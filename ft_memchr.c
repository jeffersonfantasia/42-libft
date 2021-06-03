/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:35:55 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/02 20:54:08 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p_str, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)p_str;
	if (!str)
		return (NULL);
	while (len--)
	{
		if ((*str) == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
