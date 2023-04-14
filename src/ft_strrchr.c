/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:38:56 by moeisa            #+#    #+#             */
/*   Updated: 2023/04/13 22:52:19 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = (int) ft_strlen(str);
	while (index >= 0)
	{
		if (str[index] == (unsigned char) c)
		{
			return ((char *)str + index);
		}
		index--;
	}
	return (NULL);
}
