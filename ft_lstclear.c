/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:38:04 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/18 16:49:06 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_lst;
	t_list	*next_lst;

	current_lst = *lst;
	while (current_lst != NULL)
	{
		next_lst = current_lst->next;
		ft_lstdelone(current_lst, del);
		current_lst = next_lst;
	}
	*lst = NULL;
}
