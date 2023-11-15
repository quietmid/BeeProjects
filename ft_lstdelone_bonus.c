/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:08:04 by jlu               #+#    #+#             */
/*   Updated: 2023/11/15 18:51:58 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (!del)
		return ;
	if (!(lst->content))
		return ;
	del(lst->content);
	free(lst);
}


	//takes as a parameter a node and frees the memory of the node's content using the function `del` given as a parameter and free the node. the memory of `next` must not be freed.
