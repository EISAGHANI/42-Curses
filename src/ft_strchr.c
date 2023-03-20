/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:38:26 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/20 17:01:12 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int *ft_strchr(const char *str, int c)
{
    while (*str != '\0' && *str != (unsigned char) c)
        str++;
    if (*str == (unsigned char)c)
        return((char *)str);
            
    return (0);
    
}

