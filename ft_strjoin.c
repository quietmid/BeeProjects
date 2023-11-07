/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:31:14 by jlu               #+#    #+#             */
/*   Updated: 2023/11/07 15:13:00 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  len;
    size_t  i;
    size_t  j;

    len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
    str = (char *)malloc((len + 1) * sizeof(char));

    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
        str[j++] = s1[i++];
    i = 0;
    while (s2[i])
        str[j++] = s2[i++];
    str[j] = '\0';
    return (str);
}
