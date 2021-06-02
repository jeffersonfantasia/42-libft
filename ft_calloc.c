/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:39:29 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/02 17:45:06 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p_src;

	p_src = (void *) malloc(num * size);
	if (p_src == NULL)
		return (NULL);
	ft_bzero(p_src, (num * size));
	return (p_src);
}
