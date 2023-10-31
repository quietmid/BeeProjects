/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:52:25 by jlu               #+#    #+#             */
/*   Updated: 2023/10/25 16:52:51 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (0);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

//int	main(void)
//{
//	char	str[50] = "why we do this to ourself?";
//	printf("\nBefore ft_memset(): %s\n", str);
//	ft_memset(str + 4, 71, 8*sizeof(char));
//	printf("After ft_memset(): %s", str);
//	return (0);
//}