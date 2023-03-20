/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:43:59 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/20 15:44:57 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	d = dest;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}

// int main() {
//    char src[] = "";
//    char dest[15];
//    ft_memcpy(dest, src, 2);
//    printf("The string copied to dest is: %s\n", dest);
//    return 0;
// }
