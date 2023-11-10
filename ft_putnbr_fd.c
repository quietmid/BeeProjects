/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:13:41 by jlu               #+#    #+#             */
/*   Updated: 2023/11/10 16:03:25 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    nbl;
    
    nbl = n;
    if (nbl < 0)
    {
        nbl *= -1;
        ft_putchar_fd('-', fd);
    }
    if (nbl < 10)
        ft_putchar_fd(nbl + '0', fd);
    else
    {
        ft_putnbr_fd((nbl / 10), fd);
        ft_putnbr_fd((nbl % 10), fd);
    }
}
