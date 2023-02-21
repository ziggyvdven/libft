# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zvan-de- <zvan-de-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 13:45:36 by zvandeven         #+#    #+#              #
#    Updated: 2023/02/21 18:14:34 by zvan-de-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
CC			= gcc
RM			= rm -f
CFLAGS		= -g -Wall -Wextra -Werror
OBJ			= $(SRC:.c=.o)
BONUS_OBJ	= $(SRCBONUS:.c=.o)
SRC			=  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
ft_atoi.c ft_strdup.c ft_substr.c ft_calloc.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c\
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
ft_putendl_fd.c ft_putnbr_fd.c ft_split.c\

SRCBONUS 	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\

all: $(NAME)

$(NAME): libft.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: 
	$(CC) $(CFLAGS) -c $(SRCBONUS)	
	ar rcs $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)
	
clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:		all bonus clean fclean re