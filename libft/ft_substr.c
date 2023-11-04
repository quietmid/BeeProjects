/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:28:48 by jlu               #+#    #+#             */
/*   Updated: 2023/11/03 14:20:33 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *substr;

    substr = (char *)malloc((len + 1) * sizeof(char));
    i = 0;
    if (!substr)
        return (NULL);
    while (i < len)
        substr[i++] = s[start++];
    substr[i] = '\0';
    return (substr);
}
