/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:17:56 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/02 17:03:21 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *p_dest, const void *p_src, int c, size_t len)
{
	unsigned char	*src;
	unsigned char	*dest;

	src = (unsigned char *)p_src;
	dest = (unsigned char *)p_dest;
	if (p_dest == NULL && p_src == NULL)
		return (NULL);
	while (len--)
	{
		*(dest) = *(src);
		if (*(src) == (unsigned char)c)
		{
			dest++;
			return (dest);
		}
		src++;
		dest++;
	}
	return (NULL);
}
