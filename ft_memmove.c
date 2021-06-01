/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:17:56 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/01 18:10:54 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *p_dest, const void *p_src, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;

	if ((p_dest == NULL && p_src == NULL) || n == 0)
		return (NULL);
	if (p_src < p_dest)
	{
		src = (unsigned char *)p_src + n - 1;
		dest = (unsigned char *)p_dest + n - 1;
		while (n > 0)
		{
			*(dest) = *(src);
			src++;
			dest++;
			n--;
		}
	}
	else
		ft_memcpy(p_dest, p_src, n);
	return (p_dest);
}
