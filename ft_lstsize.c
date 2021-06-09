/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:55:05 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/09 18:10:22 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	if (lst == NULL)
		return (0);
	size = 1;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
