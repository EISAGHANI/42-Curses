
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:50:35 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/16 18:50:45 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int *ft_memset(void *s, int c, size_t n){
    
    size_t i=0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = c;
         i++;
    }
    
       
    

    return (s);
}


int main(void)  
{  
    char memory[8];  
   
    ft_memset(memory, 'a', 8);  
    printf("%s  ", memory);  

  
    return (0);  
}  
