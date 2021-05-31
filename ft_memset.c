/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:33:05 by jfranchi          #+#    #+#             */
/*   Updated: 2021/05/31 16:42:08 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *str;
	size_t i;

	str = b;
	i = 0;
	if (!str || !len)
		return NULL;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
