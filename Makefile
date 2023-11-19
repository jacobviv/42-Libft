# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 15:13:12 by rbriongo          #+#    #+#              #
#    Updated: 2023/03/31 17:23:48 by rbriongo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c
SRC += ft_isalpha.c
SRC += ft_isascii.c
SRC += ft_isdigit.c
SRC += ft_isprint.c	
SRC += ft_strlen.c
SRC += ft_toupper.c
SRC += ft_tolower.c
SRC += ft_strchr.c
SRC += ft_strrchr.c
SRC += ft_strlcpy.c

OBJECTS = *.o

INCLUDE = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) -I $(INCLUDE)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all