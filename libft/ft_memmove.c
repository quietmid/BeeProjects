/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:24:57 by jlu               #+#    #+#             */
/*   Updated: 2023/11/01 12:44:44 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t  i;
    char    *cdest;
    char    *csrc;
    char    *temp;

    cdest = (char*)dest;
    csrc = (char*)src;
    i = 0;
    if (dest < src)
        return (ft_memcpy(cdest, csrc, len));
    else if (dest > src)
    {
        temp = csrc;
        while (i < len)
        {
            cdest[i] = temp[i];
            i++;
        }
    }
    return (dest);
    if (!dest && !src)
        return 0;
}
