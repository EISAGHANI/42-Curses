/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:18:59 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/02 23:00:43 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char *ft_strdup(const char *s){
    char *dupl;
    size_t len;

    len = ft_strlen(s) + 1;
    dupl = malloc(sizeof(char) * len);
    
    ft_memcpy(dupl, s, len);
 
    return(dupl);
}

// int main() {
//     char *original = "Hello, world!";
//     char *copy = ft_strdup(original);
//     printf("Original string: %s\n", original);
//     printf("Copied string: %s\n", copy);
//     return 0;
// }