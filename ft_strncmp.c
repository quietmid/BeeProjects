/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:23:26 by jlu               #+#    #+#             */
/*   Updated: 2023/11/01 12:48:56 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char    *str1;
    char    *str2;
    size_t  i;

    str1 = (char *)s1;
    str2 = (char *)s2;
    i = 0;
    while (i < n && *str1 != '\0' && *str1 == *str2)
    {
        if (str1[i] == str2[i])
            i++;
        else
        {
            return (str1[i] - str2[i]);
        }
    }
    return (0);
}
