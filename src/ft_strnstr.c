/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:38:50 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/22 17:12:23 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <string.h>

// char *ft_strnstr(const char *haystack, const char *needle, size_t n)
// {
//     char str;
//     int i;
//     while (haystack[i] != '\0' && haystack[i] < n)
//     {
//         if (needle[i] == haystack[i])
//             str = needle[i];
//     }
//     return (str);
    
// }












char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	// if (little[0] == '\0')
	// 	return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *) big + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}




int main() {
    char haystack[] = "The quick brown fox jumps over the lazy dog";
    char needle[] = "brown";
    char *result = ft_strnstr(haystack, needle, strlen(haystack));
    if (result != NULL) {
        printf("Substring found at position %ld\n", result - haystack);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}
