/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:53:57 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/07 18:37:50 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			s_len;

	if (!s)
		return (NULL);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		s = (s + s_len);
	else
		s = (s + start);
	i = 0;
	while (len-- && *(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	return (str);
}
