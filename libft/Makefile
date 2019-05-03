# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabakhar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/30 21:34:28 by yabakhar          #+#    #+#              #
#    Updated: 2019/04/19 01:03:19 by yabakhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_*.c
FLG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc $(FLG) -c $(SRC)
		ar rc $(NAME) *.o
		ranlib $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
