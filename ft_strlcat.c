/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:40:29 by jlu               #+#    #+#             */
/*   Updated: 2023/11/10 18:40:32 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen((char *)src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen((char *)dst);
	i = dst_len;
	j = 0;
	if (dstsize < dst_len)
		return (src_len + dstsize);
	while (src[j] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
