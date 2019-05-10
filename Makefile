# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/23 09:57:56 by matsokoe          #+#    #+#              #
#    Updated: 2019/05/07 15:59:54 by matsokoe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = putchar putstr strcmp strlen swap

FILES = $(addprefix srcs/ft_, $(SRCS))

CFILES = $(addsuffix .c, $(FILES))

OFILES = $(addsuffix .o, $(FILES))

OBJS = $(CFILES: .c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OFILES)

clean:
	bin/rm -rf $(OBJS)

fclean: clean
	bin/rm -rf $(NAME)

re:	fclean all 

.PHONY: all clean fclean re $(NAME)

.SILENT: clean fclean re $(OBJS)
