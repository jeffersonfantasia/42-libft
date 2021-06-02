/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:33:05 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/02 16:00:06 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p_str, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)p_str;
	if (!str)
		return (NULL);
	while (len--)
	{
		*(str) = c;
		str++;
	}
	return (p_str);
}
