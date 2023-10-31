/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:35:41 by jlu               #+#    #+#             */
/*   Updated: 2023/10/30 18:27:55 by jlu              ###   ########.fr       */
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
int main(void)
{
    char str1[] = "";
    char str2[] = "";
    int res = ft_memcmp(str1, str2, 3);

    if (res > 0)
        printf("String1 is greater than String2 by %d.\n", res);
    else if (res < 0)
        printf("String1 is lesser than String2 by %d.\n", res);
    else
        printf("String1 and String2 are equal by %d.\n", res);
    return (0);
}