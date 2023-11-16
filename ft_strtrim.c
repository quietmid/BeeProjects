/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:22:37 by jlu               #+#    #+#             */
/*   Updated: 2023/11/16 15:13:08 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	size_t	start;
	size_t	end;
	size_t	strlen;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isinset(s1[start], set))
		start++;
	end = ft_strlen((char *)s1);
	while (start < end && ft_isinset(s1[end - 1], set))
		end--;
	strlen = end - start;
	trimstr = ft_substr(s1, start, strlen);
	return (trimstr);
}
