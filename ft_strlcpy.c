/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:45:43 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/03 13:45:08 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *p_dest, const char *p_src, size_t len)
{
	size_t	n;

	if (p_src == NULL)
		return (0);
	if (len > 0)
	{
		n = 0;
		while (p_src[n] != '\0' && n < (len - 1))
		{
			p_dest[n] = p_src[n];
			n++;
		}
		p_dest[n] = '\0';
	}
	return (ft_strlen(p_src));
}
