/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:39:19 by jlu               #+#    #+#             */
/*   Updated: 2023/11/04 16:30:47 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int ft_wordcount(char const *str, char c)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (!str)
        return (0);
    while (str[i])
    {
        if (str[i] == c)
            j++;
        i++;
    }
    return (j);
}

char    **ft_split(char const *str, char c)
{
    size_t  i;
    size_t  j;
    size_t  old_i;
    int     str_index;
    int     strcount;
    char    **result_str;
    char    buffer[16384];
    
    strcount = 0;
    i = 0;
    if (!str)
        return (NULL);
    while (str[i])
    {
        while (str[i])
        {
            if (str[i] == c)
                break;
            i++;    
        }
        old_i = i;
        while (str[i])
        {
            if (str[i] != c)
                break;
            i++;
        }
        if (i >= old_i)
            strcount += 1;
    }
    result_str = malloc(sizeof(char *) * strcount);
    i = 0;
    str_index = 0;
    while (str[i])
    {
        j = 0;
        while (str[i] && str[i] != c)
        {
            buffer[j] = str[i];
            i++;
            j++;
        }
        while (str[i])
        {
            if (ft_strchr(&str[i], c) != NULL)
               i++;
               break;
        }
        if (j > 0)
        {
            buffer[j] = '\0';
            result_str[str_index] = malloc(ft_strlen(buffer) + 1);
            ft_memcpy(result_str[str_index], buffer, (ft_strlen(buffer) + 1));
            str_index++;
        }
    }
    return (result_str);
}

// string counts something is wrong there. I need to fix it or prevent the infinite loop. I am not stopping it. 

int main(void)
{
  char  str[] = "Toe,nte, qut";
  char  c = ',';
  char **ret;
  int   i;
  int j;

  i = 0;
  
  j = ft_wordcount(str, c);
  ret = ft_split(str, c);
  printf("the number of substring is: %d\n", j);
  while (i < j)
  {
    printf("%s\n", ret[i]);
    i++;
  }
  i = 0;
  while (i < j)
  {
    free(ret[i]);
    i++;
  }
  free(ret);
  return 0;
}