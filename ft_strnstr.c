/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:55 by jlu               #+#    #+#             */
/*   Updated: 2023/10/30 19:15:39 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    j = 0;
    if (needle[j] == '\0')
        return ((char *)haystack);
    i = 0;
    while (haystack[i] != '\0' && needle[j] != '\0' && i < len)
    {
        if (needle[j] == haystack[i])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
    }
    if (needle[j] == '\0')
        return ((char *)&haystack[i - j]);
    else
        return (NULL);
}

int main(void) {
    char haystack[] = "This is a simple example.";
    char needle[] = "simple";
    size_t max_len = 20;

    char *result = ft_strnstr(haystack, needle, max_len);

    if (result != NULL) {
        printf("Substring found at index: %ld\n", result - haystack);
        printf("Substring: %s\n", result);
    } else {
        printf("Substring not found within the first %lu characters.\n", (unsigned long)max_len);
    }

    return 0;
}