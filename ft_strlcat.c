/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:40:29 by jlu               #+#    #+#             */
/*   Updated: 2023/11/01 12:46:03 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * restrict dest, const char * restrict src, size_t destsize)
{
	size_t	d_len;
	size_t 	s_len;
	size_t	i;
	size_t	j;

	d_len = ft_strlen((char*)dest);
	s_len = ft_strlen((char*)src);

	if (destsize == 0 || !dest)
		return (0);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < (destsize - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}
