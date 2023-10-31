/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:23:26 by jlu               #+#    #+#             */
/*   Updated: 2023/10/30 15:33:14 by jlu              ###   ########.fr       */
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

int main (void) 
{
    char str1[15] = "ABCDEf";
    char str2[15] = "ABCeeF";
    int result;

   result = ft_strncmp(str1, str2, 5);
    if (result < 0) 
    {
      printf("str1 is less than str2\n");
    } else if (result > 0) {
      printf("str2 is less than str1\n");
    } else 
    {
       printf("str1 is equal to str2\n");
    }
    printf("Value returned by strncmp() is: %d\n", result);
    return(0);
}