/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:51:05 by jlu               #+#    #+#             */
/*   Updated: 2023/11/16 12:17:28 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!lst)
		return ;
	if (!del)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
	*lst = 0;
}
