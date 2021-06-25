/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:14:04 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/25 14:31:24 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *p_dest, const char *p_src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (p_dest[i] && i < len)
		i++;
	while (p_src[j] != '\0' && i + 1 < len)
		p_dest[i++] = p_src[j++];
	if (len > i)
		p_dest[i] = '\0';
	while (p_src[j++])
		i++;
	return (i);
}
