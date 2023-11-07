/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:57:41 by jlu               #+#    #+#             */
/*   Updated: 2023/11/07 13:57:58 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_str_count(char const *str, char c)
{
    size_t  i;
    size_t  old_i;
    int strcount;

    i = 0;
    strcount = 0;
    while (str[i])
    {
        while (str[i])
        {
            if (str[i++] == c)
                break;   
        }
        old_i = i;
        while (str[i])
        {
            if (str[i++] != c)
                break;
        }
        if (i >= old_i)
            strcount += 1;
    }
    return (strcount);
}

static char     **ft_start_split(char const *str, char c)
{
    size_t  i;
    size_t  j;
    size_t  strcount;
    size_t  str_index;
    char **result_strs;

    strcount = ft_str_count(str, c);
    result_strs = malloc(sizeof(char *) * (strcount));
    if (!result_strs)
        free(result_strs);
    i = 0;
    j = 0;
    str_index = 0;
    while (str[i])
    {
        while (str[i] && str[i] != c)
            i++;
        result_strs[str_index] = ft_substr(str, j, (i - j));
        j = i + 1;
        str_index++;
        while (str[i] && ft_strchr(&str[i++], c) != NULL)
            break;
    }
    return(result_strs);
}

static  int    ft_check_split(char **str, size_t arr_len)
{
    int exit;
    size_t  str_index;
    
    exit = 0;
    str_index = 0;
    while (str[str_index])
    {
        if (!str[str_index])
        {
            str_index = 0;
            while (str_index < arr_len)
            {
                free(str[str_index]);
                str_index++;
            }
            free(str);
            exit = 1;
        }
        str_index++;
        if (exit == 1)
            return (0);
        break;
    }
    return (1);
}

char    **ft_split(char const *str, char c)
{
    char    **result_strs;
    int     arr_len;
    
    if (!str)
        return (NULL);
    result_strs = ft_start_split(str, c);
    arr_len = ft_str_count(str, c);
    if (ft_check_split(result_strs, arr_len) == 0)
        return (NULL);
    return (result_strs);
}

int main(void)
{
  char  str[] = "To be, or, not to bob, Question he asked,";
  char  c = ',';
  char **ret;
  int   i;
  int   str_count;

  i = 0;
  str_count = ft_str_count(str, c);
  ret = ft_split(str, c);
  printf("The string is: %s\n", str);
  printf("The string count is %d and the separator is %c\n", str_count, c);
  while (i < str_count)
  {
    printf("%s\n", ret[i]);
    i++;
  }
  i = 0;
  while (i < str_count)
  {
    free(ret[i]);
    i++;
  }
  free(ret);
  return 0;
}