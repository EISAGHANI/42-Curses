/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:37:40 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/20 13:58:45 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	out;
	int	sign;

	out = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		out = out * 10 + *str - '0';
		str++;
	}
	return (sign * out);
}

// int		main(void)
// {
// 	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));
// }