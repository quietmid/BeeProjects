/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:13:39 by jlu               #+#    #+#             */
/*   Updated: 2023/10/30 15:17:20 by jlu              ###   ########.fr       */
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

int main(void)
{
    const char  str[] = "httttps://yyy.wowlifesgreat.org";
    const char  ch = '.';
    char *ret;

    ret = ft_strrchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);
}