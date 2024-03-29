/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:39:29 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/03 13:01:13 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t len)
{
	void	*p_src;

	p_src = (void *) malloc(num * len);
	if (p_src == NULL)
		return (NULL);
	ft_bzero(p_src, (num * len));
	return (p_src);
}
