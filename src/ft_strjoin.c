/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:41:17 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/14 02:10:26 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char   *ft_strjoin(const char *s1, const char *s2)
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
