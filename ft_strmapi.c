/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:36:49 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/07 17:41:43 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (str == NULL)
		return (0);
	i = 0;
	while (*s)
		*str++ = f(i++, *s++);
	return (str - i);
}
