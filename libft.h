/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:27:36 by jlu               #+#    #+#             */
/*   Updated: 2023/11/07 15:16:43 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h> // take this out
# include <stdio.h> // take this out

void	*ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
size_t	ft_strlen(char *str);
void    ft_bzero(void *s, size_t n);
size_t  ft_strlcat(char * restrict dest, const char * restrict src, size_t destsize);
size_t  ft_strlcpy(char * restrict dest, const char * restrict src, size_t destsize);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *str1);

#endif
