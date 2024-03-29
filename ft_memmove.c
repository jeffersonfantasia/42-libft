/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:17:56 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/02 20:32:45 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *p_dest, const void *p_src, size_t len)
{
	unsigned char	*src;
	unsigned char	*dest;

	if (p_dest == NULL && p_src == NULL)
		return (NULL);
	if (p_src < p_dest)
	{
		src = (unsigned char *)p_src;
		dest = (unsigned char *)p_dest;
		while (len--)
			*(dest + len) = *(src + len);
	}
	else
		ft_memcpy(p_dest, p_src, len);
	return (p_dest);
}
