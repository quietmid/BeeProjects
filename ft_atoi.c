/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:59:25 by jlu               #+#    #+#             */
/*   Updated: 2023/11/12 18:12:44 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	nb;
	int				i;
	unsigned long	limit;

	limit = 9223372036854775807;
	nb = 0;
	i = 1;
	while (((*str > 8 && *str < 14) || *str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - 48);
		str++;
		if (i == 1 && nb > limit)
			return (-1);
		else if (i == -1 && nb > limit)
			return (0);
	}
	return (nb * i);
}
