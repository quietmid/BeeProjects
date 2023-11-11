/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:53:23 by jlu               #+#    #+#             */
/*   Updated: 2023/11/11 17:51:57 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	ch = (unsigned char)c;
	str = ((unsigned char *)s);
	i = 0;
	while ((str[i] != '\0' && str[i] != ch) && i < n)
		i++;
	if (str[i] == ch || (ch == '\0' && str[i] == '\0'))
	{
		return ((void *)&str[i]);
	}
	return (NULL);
}
