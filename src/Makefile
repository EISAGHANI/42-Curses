# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moeisa <moeisa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 17:16:50 by moeisa            #+#    #+#              #
#    Updated: 2023/03/18 18:28:37 by moeisa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC 		:= 	clang
FLAGS 	:= 	-Wall -Wextra -Werror
RM		:=	rm -f
NAME	:=	libft.a
SRCS	:= 	ft_isascii.c \
ft_isprint.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isalpha.c \
ft_strlen.c \
ft_memset.c \





OBJS	:=	$(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS) 
			ar -rcs $(NAME) $(OBJS)


.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all
