/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:55 by jlu               #+#    #+#             */
/*   Updated: 2023/11/01 12:49:30 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    j = 0;
    if (needle[j] == '\0')
        return ((char *)haystack);
    i = 0;
    while (haystack[i] != '\0' && needle[j] != '\0' && i < len)
    {
        if (needle[j] == haystack[i])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
    }
    if (needle[j] == '\0')
        return ((char *)&haystack[i - j]);
    else
        return (NULL);
}
