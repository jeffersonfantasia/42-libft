/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:17:56 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/02 15:59:25 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *p_dest, const void *p_src, size_t len)
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
		dest++;
		src++;
	}
	return (p_dest);
}
