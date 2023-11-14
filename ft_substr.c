/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:28:48 by jlu               #+#    #+#             */
/*   Updated: 2023/11/14 14:23:00 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*substr;

	if (!s)
		return (NULL);
	if (len > ft_strlen((char *)s) - start)
		len = (ft_strlen((char *)s) - start);
	if (start >= ft_strlen((char *)s))
		len = 0;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
