/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:13:39 by jlu               #+#    #+#             */
/*   Updated: 2023/11/01 12:49:55 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char    *str;
    size_t  len;

    str = (char *)s;
    len = ft_strlen(str);
    i = len;
    while (i >= 0)
    {
        if (str[i] == c)
        {
            return (&str[i]);
        }
        i--;
    }
    return (NULL);
}
