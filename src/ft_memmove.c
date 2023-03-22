/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:38:16 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/22 15:35:12 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	d = dest;
	s = src;
	if( d<s ){
        while (n-- > 0)
		*d++ = *s++;
    } else {
        while (n--)
        {
            d[n] = s[n];
        }
        
    }

	return (dest);
}



// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";
//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }