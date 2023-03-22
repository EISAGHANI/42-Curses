
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:24:35 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/16 16:24:36 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <stdio.h>

size_t	ft_strlen(const char *s){
    int len = 0;

    int i = 0;
    while ( s[i] != '\0')
    {
        i++;
        len++;
    }
    



    return i;
}

// int main(){    
// char ch[20]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't'};    
//    printf("Length of string is: %d", ft_strlen(ch));    
//  return 0;    
// } 
