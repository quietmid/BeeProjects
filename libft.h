/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:27:36 by jlu               #+#    #+#             */
/*   Updated: 2023/10/30 15:15:56 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h> // remember to take this out
# include <string.h> // remember to take this out

void	*ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
size_t	ft_strlen(char *str);

#endif
