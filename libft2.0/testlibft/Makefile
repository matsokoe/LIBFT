# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mikorale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/16 20:38:00 by mikorale          #+#    #+#              #
#    Updated: 2018/10/16 16:42:20 by mikorale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ../ft_atoi.c ../ft_bzero.c ../ft_isalnum.c ../ft_isalpha.c ../ft_isascii.c \
	../ft_isdigit.c ../ft_isprint.c ../ft_itoa.c ../ft_memalloc.c \
	../ft_memccpy.c ../ft_memchr.c ../ft_memcmp.c ../ft_memcpy.c ../ft_memdel.c \
	../ft_memmove.c ../ft_memset.c ../ft_putchar.c ../ft_putchar_fd.c ../ft_putendl.c \
	../ft_putendl_fd.c ../ft_putnbr.c ../ft_putnbr_fd.c ../ft_putstr.c ../ft_putstr_fd.c \
	../ft_strcat.c ../ft_strchr.c ../ft_strclr.c ../ft_strcmp.c ../ft_strcpy.c \
	../ft_strdel.c ../ft_strdup.c ../ft_strequ.c ../ft_striter.c ../ft_striteri.c \
	../ft_strjoin.c ../ft_strlcat.c ../ft_strlen.c ../ft_strmap.c ../ft_strmapi.c \
	../ft_strncat.c ../ft_strncmp.c ../ft_strncpy.c ../ft_strnequ.c ../ft_strnew.c \
	../ft_strnstr.c ../ft_strrchr.c ../ft_strsplit.c ../ft_strstr.c ../ft_strsub.c \
	../ft_strtrim.c ../ft_tolower.c ../ft_toupper.c

SRCLST = ../ft_lstnew.c ../ft_lstadd.c ../ft_lstdel.c ../ft_lstdelone.c \
		 ../ft_lstiter.c ../ft_lstmap.c

OBJ1 := $(SRC:%.c=%.o)

OBJ :=$(OBJ1:../%=%)

OBJLST1 := $(SRCLST:%.c=%.o)

OBJLST := $(OBJLST1:../%=%)

CHECK = test_check.c test_check_num.c

CC = gcc -Wall -Wextra -Werror

all:
	@$(CC) -c $(SRC)
	# ############### #
	# FUNCTION PART 1 #
	# ############### #
	@$(CC) -o exe_memset test_ft_memset.c $(CHECK) $(OBJ)
	@./exe_memset
	@$(CC) -o exe_bzero test_ft_bzero.c $(CHECK) $(OBJ)
	@./exe_bzero
	@$(CC) -o exe_memcpy test_ft_memcpy.c $(CHECK) $(OBJ)
	@./exe_memcpy
	@$(CC) -o exe_memccpy test_ft_memccpy.c $(CHECK) $(OBJ)
	@./exe_memccpy
	@$(CC) -o exe_memmove test_ft_memmove.c $(CHECK) $(OBJ)
	@./exe_memmove
	@$(CC) -o exe_memchr test_ft_memchr.c $(CHECK) $(OBJ)
	@./exe_memchr
	@$(CC) -o exe_memcmp test_ft_memcmp.c $(CHECK) $(OBJ)
	@./exe_memcmp
	@$(CC) -o exe_strlen test_ft_strlen.c $(CHECK) $(OBJ)
	@./exe_strlen
	@$(CC) -o exe_strdup test_ft_strdup.c $(CHECK) $(OBJ)
	@./exe_strdup
	@$(CC) -o exe_strcpy test_ft_strcpy.c $(CHECK) $(OBJ)
	@./exe_strcpy
	@$(CC) -o exe_strncpy test_ft_strncpy.c $(CHECK) $(OBJ)
	@./exe_strncpy
	@$(CC) -o exe_strcat test_ft_strcat.c $(CHECK) $(OBJ)
	@./exe_strcat
	@$(CC) -o exe_strncat test_ft_strncat.c $(CHECK) $(OBJ)
	@./exe_strncat
	@$(CC) -o exe_strlcat test_ft_strlcat.c $(CHECK) $(OBJ)
	@./exe_strlcat
	@$(CC) -o exe_strchr test_ft_strchr.c $(CHECK) $(OBJ)
	@./exe_strchr
	@$(CC) -o exe_strrchr test_ft_strrchr.c $(CHECK) $(OBJ)
	@./exe_strrchr
	@$(CC) -o exe_strstr test_ft_strstr.c $(CHECK) $(OBJ)
	@./exe_strstr
	@$(CC) -o exe_strnstr test_ft_strnstr.c $(CHECK) $(OBJ)
	@./exe_strnstr
	@$(CC) -o exe_strcmp test_ft_strcmp.c $(CHECK) $(OBJ)
	@./exe_strcmp
	@$(CC) -o exe_strncmp test_ft_strncmp.c $(CHECK) $(OBJ)
	@./exe_strncmp
	@$(CC) -o exe_atoi test_ft_atoi.c $(CHECK) $(OBJ)
	@./exe_atoi
	@$(CC) -o exe_isalpha test_ft_isalpha.c $(CHECK) $(OBJ)
	@./exe_isalpha
	@$(CC) -o exe_isdigit test_ft_isdigit.c $(CHECK) $(OBJ)
	@./exe_isdigit
	@$(CC) -o exe_isalnum test_ft_isalnum.c $(CHECK) $(OBJ)
	@./exe_isalnum
	@$(CC) -o exe_isascii test_ft_isascii.c $(OBJ)
	@./exe_isascii
	@$(CC) -o exe_isprint test_ft_isprint.c $(CHECK) $(OBJ)
	@./exe_isprint
	@$(CC) -o exe_toupper test_ft_toupper.c $(CHECK) $(OBJ)
	@./exe_toupper
	@$(CC) -o exe_tolower test_ft_tolower.c $(CHECK) $(OBJ)
	@./exe_tolower
	# ############### #
	# FUNCTION PART 2 #
	# ############### #
	@$(CC) -o exe_memalloc test_ft_memalloc.c $(OBJ)
	@./exe_memalloc
	@$(CC) -o exe_memdel test_ft_memdel.c $(OBJ)
	@./exe_memdel
	@$(CC) -o exe_strnew test_ft_strnew.c $(OBJ)
	@./exe_strnew
	@$(CC) -o exe_strdel test_ft_strdel.c $(OBJ)
	@./exe_strdel
	@$(CC) -o exe_strclr test_ft_strclr.c $(OBJ)
	@./exe_strclr
	@$(CC) -o exe_striter test_ft_striter.c $(CHECK) $(OBJ)
	@./exe_striter
	@$(CC) -o exe_striteri test_ft_striteri.c $(CHECK) $(OBJ)
	@./exe_striteri
	@$(CC) -o exe_strmap test_ft_strmap.c $(CHECK) $(OBJ)
	@./exe_strmap
	@$(CC) -o exe_strmapi test_ft_strmapi.c $(CHECK) $(OBJ)
	@./exe_strmapi
	@$(CC) -o exe_strequ test_ft_strequ.c $(OBJ)
	@./exe_strequ
	@$(CC) -o exe_strnequ test_ft_strnequ.c $(OBJ)
	@./exe_strnequ
	@$(CC) -o exe_strsub test_ft_strsub.c $(CHECK) $(OBJ)
	@./exe_strsub
	@$(CC) -o exe_strjoin test_ft_strjoin.c $(CHECK) $(OBJ)
	@./exe_strjoin
	@$(CC) -o exe_strtrim test_ft_strtrim.c $(CHECK) $(OBJ)
	@./exe_strtrim
	@$(CC) -o exe_strsplit test_ft_strsplit.c $(CHECK) $(OBJ)
	@./exe_strsplit
	@$(CC) -o exe_itoa test_ft_itoa.c $(CHECK) $(OBJ)
	@./exe_itoa
	@$(CC) -o exe_putchar test_ft_putchar.c $(OBJ)
	@./exe_putchar
	@$(CC) -o exe_putstr test_ft_putstr.c $(OBJ)
	@./exe_putstr
	@$(CC) -o exe_putendl test_ft_putendl.c $(OBJ)
	@./exe_putendl
	@$(CC) -o exe_putnbr test_ft_putnbr.c $(OBJ)
	@./exe_putnbr > putnbr.txt
	@$(CC) -o exe_putstr_fd test_ft_putstr_fd.c $(OBJ)
	@./exe_putstr_fd
	@$(CC) -o exe_putendl_fd test_ft_putendl_fd.c $(OBJ)
	@./exe_putendl_fd
	@$(CC) -o exe_putnbr_fd test_ft_putnbr_fd.c $(OBJ)
	@./exe_putnbr_fd

liste:
	@$(CC) -c $(SRCLST)
	@$(CC) -o exe_liste test_liste.c $(OBJ) $(OBJLST)
	@./exe_liste

clean:
	@rm -f *.o

fclean: clean
	@rm -rf exe_*

re: fclean all
