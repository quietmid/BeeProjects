/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:59:25 by jlu               #+#    #+#             */
/*   Updated: 2023/10/31 14:11:15 by jlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int nb;
    int i;

    nb = 0;
    i = 1;
    while (((*str > 8 && *str < 14) || *str == 32))
        str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
        i *= -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        nb = nb * 10 + (*str - 48);
        str++;
    }
    return (nb * i);
}
int main(void)
{
    char str[] = " \n\t\r\v---+-+-21356age6577";
    int result;

    printf("the string is: %s\n", str);
    result = ft_atoi(str);
    printf("the integer is: %d", result);
    return 0;
}