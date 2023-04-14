/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:38:31 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/04 17:18:10 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length_src;
	unsigned int	length_dest;

	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	j = length_dest;
	i = 0;
	if (size == 0 || size < length_dest)
		return (size + length_src);
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (length_src + length_dest);
}
