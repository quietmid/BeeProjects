/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:53:23 by jlu               #+#    #+#             */
/*   Updated: 2023/11/07 17:22:50 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *str;

    str = ((unsigned char *)s);
    i = 0;
    if (!str)
        return (NULL);
    while ((str[i] != '\0' && str[i] != c) && i < n)
        i++;
    if (str[i] == c || (c == '\0' && str[i] == '\0'))
    {
        return (&str[i]);
    }
    return (NULL);
}
