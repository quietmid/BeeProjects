/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:53:23 by jlu               #+#    #+#             */
/*   Updated: 2023/10/30 17:29:56 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *str;

    str = ((char *)s);
    i = 0;
    while (str[i] != '\0' && i < n)
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
   char    *pos = ft_memchr(str, ch, ft_strlen((char *)str) * sizeof(char));
   
   if (pos == NULL)
   {
        printf("Character not found!\n");
   }
   else
   {
   printf("pos[0] = %c\n", pos[0]);
   printf("pos[1] = %c\n", pos[1]);
   printf("pos: %s\n", pos);
   }

//   char *nexttest = ft_memchr(str, ch, (ft_strlen(str) * sizeof(char)));
//   printf("Next Test: %s\n", nexttest);
   return(0);
}