/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:05:56 by jlu               #+#    #+#             */
/*   Updated: 2023/11/01 12:44:23 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t  i;

    i = 0;
    while (((char*)src)[i] != '\0' && i < n)
    {
        ((char*)dest)[i] = ((char*)src)[i];
        i++;
    }
    return (dest);
}

