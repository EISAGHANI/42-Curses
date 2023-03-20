/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:38:44 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/20 12:41:38 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
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