# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlu <jlu@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 14:24:19 by jlu               #+#    #+#              #
#    Updated: 2023/11/04 15:50:10 by jlu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strchr.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \

BSRC = 

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SRC:.c=.o)

BOBJECTS = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(BOBJECTS)
	$(cc) $(CFLAGS) -c $(SRC)
	$(cc) $(CFLAGS) -c $(BSRC)
	ar rc $(NAME) $(OBJECTS) $(BOBJECTS)
	ranlib $(NAME)

clean: 
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all 

.PHONY: all clean fclean re