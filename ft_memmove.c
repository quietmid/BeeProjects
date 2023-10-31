/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:24:57 by jlu               #+#    #+#             */
/*   Updated: 2023/10/26 17:54:53 by jlu              ###   ########.fr       */
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

int main(void)
{
    char    src[] = "god help me";

    memmove(src + 2, src, sizeof(char) * 5);
    printf("This is the library memmove: %s\n", src);
    ft_memmove(src + 2, src, sizeof(char) * 5);
    printf("This is the ft_memmove: %s\n", src);
    return 0;
}
/*
The memmove() function copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner.
char cdest | csrc are needed because i needed to cast those two variables because they were void in the arguments. 
*/