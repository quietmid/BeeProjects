/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:23:26 by jlu               #+#    #+#             */
/*   Updated: 2023/11/08 14:49:23 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t          i;
    unsigned char*  str1;
    unsigned char*  str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    i = 0;
    while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
