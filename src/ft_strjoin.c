/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:41:17 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/04 13:48:49 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>



char *strjoin(const char *s1, const char *s2)
{
    char *join;
  

    join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    
    
    size_t i = 0;
    while (*s1 != '\0')
    {
        join[i] = *s1++;
        i++;
    }
    while (*s2 != '\0')
    {
        join[i] = *s2++;
        i++;
    }
    join[i] = '\0';
    
    return (join);
}



// int main() {
//     char *s1 = "Hello";
//     char *s2 = "World";
    
//     char *s3 = strjoin(s1, s2);
    
//     printf("s1: %s\n", s1);
//     printf("s2: %s\n", s2);
//     printf("s3: %s\n", s3);
    
//     free(s3); // remember to free the memory allocated by strjoin
    
//     return 0;
// }