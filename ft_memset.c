/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:33:05 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/25 14:02:18 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p_str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		(unsigned char)str[i]) = (unsigned char)c;
		i++;
	}
	return (p_str);
}
