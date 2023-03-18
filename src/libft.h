
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:55:51 by moeisa            #+#    #+#             */
/*   Updated: 2023/03/17 15:55:52 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void ft_isalnum();
void ft_isalpha();
int ft_isascii(int c);
void ft_isdigit();
void ft_isprint();
int *ft_memset(void *s, int c, size_t n);


// {
    
//     size_t i=0;
//     while (i < n)
//     {
//         ((unsigned char *)s)[i] = c;
//          i++;
//     }
//     return (s);
// }


#endif
