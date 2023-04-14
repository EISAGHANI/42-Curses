/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:18:59 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/14 00:49:16 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s){
    char *dupl;
    size_t len;

    len = ft_strlen(s) + 1;
    dupl = malloc(sizeof(char) * len);
    
    ft_memcpy(dupl, s, len);
 
    return(dupl);
}