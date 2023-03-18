
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:26:40 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/17 15:26:42 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include <stdio.h>
#include "libft.h"



void ft_bzero(void *s, size_t n){

    ft_memset(s, '\0', n);

}



// int main(void)  
// {  
//     char memory[8];  
  
//     ft_bzero(memory, 8);  
//     printf("%s  ", memory);  

  
//     return (0);  
// }  














