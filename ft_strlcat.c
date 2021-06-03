/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:14:04 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/03 14:34:32 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *p_dest, const char *p_src, size_t len)
{
	size_t	dest_len;

	if (p_src == NULL)
		return (0);
	dest_len = ft_strlen(p_dest);
	if (len <= dest_len)
		return (len + ft_strlen(p_src));
	while (*p_src && dest_len < len - 1)
	{
		*(p_dest + dest_len) = *p_src;
		dest_len++;
		p_src++;
	}
	*(p_dest + dest_len) = '\0';
	return (dest_len + ft_strlen(p_src));
}
