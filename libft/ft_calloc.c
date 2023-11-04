/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:56:25 by jlu               #+#    #+#             */
/*   Updated: 2023/11/02 13:12:26 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    
    if (!ptr)
        return (ptr);
    ft_bzero(ptr, size * count);
    return(ptr);
}
