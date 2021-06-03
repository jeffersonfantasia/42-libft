/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:48:39 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/03 15:59:22 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*str_m;

	len = ft_strlen(str) + 1;
	str_m = (char *)ft_calloc(1, (len * sizeof(char)));
	if (str_m == NULL)
		return (NULL);
	ft_memcpy(str_m, str, len);
	return (str_m);
}
