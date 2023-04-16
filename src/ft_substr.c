/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 01:42:14 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/16 23:11:14 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	if (start > (size_t)ft_strlen((char *)s))
		return (ft_strdup(""));
	if ((size_t)ft_strlen((char *)s) - start < len)
		len = ft_strlen((char *)s) - start;
	sbstr = malloc(sizeof(char) * (len + 1));
	if (!sbstr)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] != '\0' && len--)
	{
		sbstr[j] = s[i];
		i++;
		j++;
	}
	sbstr[j] = '\0';
	return (sbstr);
}
