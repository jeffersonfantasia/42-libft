/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:12:54 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/04 20:51:08 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	n;

	if (!str1 && !str2)
		return (0);
	n = 0;
	while (len--)
	{
		if (str1[n] != str2[n])
			return ((unsigned char)str1[n] - (unsigned char)str2[n]);
		n++;
	}
	return (0);
}
