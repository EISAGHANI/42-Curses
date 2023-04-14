/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 23:14:51 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/14 01:42:35 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_numlen(int n)
{
    size_t len;
    
    len = 0;
    if (n <= 0)
        len++;
    while (n)
    {
        n /= 10;
        len++;
    }
    return(len);
}
char *ft_itoa(int num)
{
	char *temp;
    size_t len;
    long nmb;

    nmb = num;
    len = ft_numlen(nmb);
    
    temp = malloc(sizeof(char) * (len + 1));
    if (temp == 0)
        return (NULL);
    if (nmb < 0)
    {
        temp[0] = '-';
        nmb = -nmb;
    }
    temp[len--] = '\0';
    if (nmb == 0)
        temp[0] = '0';
    while (nmb)
    {
        temp[len--] = nmb % 10 + '0';
        nmb /= 10;
    }
    return(temp);
}