/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:38:44 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/16 23:09:03 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((i < n) && !result && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !result && (s1[i] == '\0' || s2[i] == '\0'))
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (result);
}
