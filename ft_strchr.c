/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:49:43 by jlu               #+#    #+#             */
/*   Updated: 2023/10/30 14:53:19 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    char *str;

    str = (char *)s;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return (&str[i]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char    *ret;

   ret = ft_strchr(str,ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}