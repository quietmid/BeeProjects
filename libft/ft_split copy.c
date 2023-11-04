/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:39:19 by jlu               #+#    #+#             */
/*   Updated: 2023/11/04 15:03:57 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static  int ft_wordcount(char const *str, char c)
//{
//    size_t  i;
//    size_t  j;

//    i = 0;
//    j = 0;
//    if (!str)
//        return (0);
//    while (str[i])
//    {
//        if (str[i] != c)
//            j++;
//        i++;
//    }
//    return (j);
//}

char    **ft_split(char const *str, char c)
{
    size_t  i;
    size_t  j;
    int 
    // size_t  wordcount; // the amount of memory we need to allocate at first
    char    **result_str;
    char    buffer[];

    if (!str)
        return (NULL);
    //wordcount = ft_wordcount(str, c);
    //result_str = (char **)malloc(wordcount * sizeof(char *));
    i = 0;
    j = 0;
    while (str[i])
    {
        while (str[i])
        {
            if (ft_strchr(c, str[i]) == NULL)
                break;
            i++;
        }
        while (str[i])
        {
            if (ft_strchr(c, str[i]) != NULL)
               break;
            
            buffer[j] = str[i];
            i++;
            j++;
        }
        if (j > 0)
        {
            buffer[j] = '\0';
        }
    }
    return (result_str);
}

int main(void)
{
  char  str[] = "hell,oow,orld";
  char  c = ',';
  int ret;
  
  printf("the string is: %s\n", str);
  ret = ft_wordcount(str, c);
  printf("the word count without %c is %d\n", c, ret);

  free(result_str);
  return 0;
}