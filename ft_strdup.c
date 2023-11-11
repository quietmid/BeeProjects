/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:17:06 by jlu               #+#    #+#             */
/*   Updated: 2023/11/11 16:29:07 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*strp;
	size_t	count;
	size_t	i;

	count = ft_strlen((char *)str1);
	strp = (char *)malloc((count + 1) * sizeof(*str1));
	if (!strp)
		return (strp);
	i = 0;
	while (str1[i] != '\0')
	{
		strp[i] = str1[i];
		i++;
	}
	strp[i] = '\0';
	return (strp);
}
