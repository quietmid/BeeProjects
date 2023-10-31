/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:10:05 by jlu               #+#    #+#             */
/*   Updated: 2023/10/30 16:52:59 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  strlcpy(char * restrict dest, const char * restrict src, size_t destsize)
{
    size_t  i;
    size_t  srcsize;
    
    if (destsize == 0 || !dest)
        return (0);
    srcsize = ft_strlen((char*)src);
    while (i < (destsize - 1) && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srcsize);
}