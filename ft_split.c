/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:57:41 by jlu               #+#    #+#             */
/*   Updated: 2023/11/14 15:06:30 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_count(char const *str, char c)
{
	size_t	i;
	int		strcount;

	i = 0;
	strcount = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		strcount++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (strcount);
}

static int	ft_free_split(char **str, size_t arr_len)
{
	int	exit;

	exit = 1;
	if (!str[arr_len])
	{
		while (arr_len != 0)
		{
			free(str[arr_len]);
			arr_len--;
		}
		free(str[0]);
		free(str);
		exit = 0;
		return (exit);
	}
	return (exit);
}

static char	**ft_start_split(char const *str, char c, size_t count, size_t idx)
{
	size_t	i;
	size_t	j;
	char	**result_strs;

	result_strs = malloc(sizeof(char *) * (count + 1));
	if (!result_strs)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && idx < count)
	{
		while (str[i] && str[i++] == c)
			j++;
		while (str[i] && str[i] != c)
			i++;
		result_strs[idx] = ft_substr(str, j, (i - j));
		if (ft_free_split(result_strs, idx) == 0)
			return (NULL);
		j = i;
		idx++;
	}
	result_strs[idx] = 0;
	return (result_strs);
}

char	**ft_split(char const *str, char c)
{
	char	**result_strs;
	size_t	arr_len;
	size_t	str_index;

	if (!str)
		return (NULL);
	str_index = 0;
	arr_len = ft_str_count(str, c);
	result_strs = ft_start_split(str, c, arr_len, str_index);
	if (!result_strs)
	{
		free(result_strs);
		return (NULL);
	}
	return (result_strs);
}
//int main(void)
//{
//  char  str[] = "split  ||this|for|me|||||!|";
//  char  c = '|';
//  char **ret;
//  int   i;
//  int   str_count;

//  i = 0;
//  str_count = ft_str_count(str, c);
//  ret = ft_split(str, c);
//  printf("The string is: %s\n", str);
//  printf("The string count is %d and the separator is %c\n", str_count, c);
//  while (i < str_count)
//  {
//    printf("%s\n", ret[i]);
//    i++;
//  }
//  i = 0;
//  while (i < str_count)
//  {
//    free(ret[i]);
//    i++;
//  }
//  free(ret);
//  return 0;
//}