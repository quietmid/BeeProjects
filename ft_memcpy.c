/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:05:56 by jlu               #+#    #+#             */
/*   Updated: 2023/10/26 17:44:53 by jlu              ###   ########.fr       */
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
/*
#include <string.h>
int main(void)
{
    char    src[] = "god help me";
    char    dest[100];

    char *dest_ptr = memcpy(dest, src, 5 * strlen(src) + 1);

    printf("This is the library memcpy: %s\n", dest);
    printf("dest_ptr: %p\n", dest_ptr);
    printf("    dest: %p\n", dest);
    char *ft_dest_ptr = ft_memcpy(dest, src, strlen(src) + 1);
    printf("     This is the ft_memcpy: %s\n", dest);
    printf("ft_dest_ptr: %p\n", ft_dest_ptr);
    printf("       dest: %p\n", dest);

    printf("This is a failed try")
    char *dest_ptr = memcpy(src, src, 5 * strlen(src) + 1);
    printf("This is the library memcpy: %s\n", src);
    printf("dest_ptr: %p\n", dest_ptr);
    printf("    dest: %p\n", dest);

    return 0;
}
*/
// The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is
//     undefined.  Applications in which dst and src might overlap should use memmove(3) instead.
