/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:17:56 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/01 18:09:48 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *p_dest, const void *p_src, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;

	src = (unsigned char *)p_src;
	dest = (unsigned char *)p_dest;
	if (p_dest == NULL && p_src == NULL)
		return (NULL);
	while (n > 0)
	{
		*(dest) = *(src);
		if (*(src) == (unsigned char)c)
		{
			dest = dest + 1;
			return (dest);
		}
		src++;
		dest++;
		n--;
	}
	return (NULL);
}
