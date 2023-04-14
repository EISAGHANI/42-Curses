/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:39:04 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/25 20:53:22 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int ft_tolower(int c)
{
	if ((c > 64 && c < 91))
	{
		return (c + 32);
	}
	return (c);
}



// int main() {
//     int ch = 'A';
//     int lower_ch;

//     if (isascii(ch)) {
//         lower_ch = ft_tolower(ch);
//         printf("The lowercase equivalent of %c is %c.\n", ch, lower_ch);
//     }
//     else {
//         printf("%c is not a valid character.\n", ch);
//     }

//     return 0;
// }
