/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:17:56 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/02 17:58:48 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *p_dest, const void *p_src, size_t len)
{
	unsigned char	*src;
	unsigned char	*dest;
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)ft_calloc(len, sizeof(char));
	if (p_dest == NULL && p_src == NULL)
		return (NULL);
	if (p_src < p_dest)
	{
		src = (unsigned char *)p_src;
		dest = (unsigned char *)p_dest;
		i = 0;
		while (i < len)
		{
			*(temp + i) = *(src + i);
			i++;
		}
		while (i--)
			*(dest + i) = *(temp + i);
		return (dest);
	}
	else
		return (ft_memcpy(p_dest, p_src, len));
}
