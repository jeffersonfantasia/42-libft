/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:17:56 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/01 18:10:21 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *p_dest, const void *p_src, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;
	size_t	i;

	src = (unsigned char *)p_src;
	dest = (unsigned char *)p_dest;
	if (p_dest == NULL && p_src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (p_dest);
}
