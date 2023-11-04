/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:35:41 by jlu               #+#    #+#             */
/*   Updated: 2023/11/01 12:43:56 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t  i;
    int result;
    char    *s1;
    char    *s2;

    s1 = (char *)str1;
    s2 = (char *)str2;
    i = 0;
    if (s1[i] == '\0' && s2[i] == '\0')
        return (0);
    while (s1[i] == s2[i] && s1 != '\0' && i < n)
    {
        i++;
    }
    result = (s1[i] - s2[i]);
    return (result);
}
