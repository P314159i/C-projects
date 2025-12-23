# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pidi <pidi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 17:23:51 by pidi              #+#    #+#              #
#    Updated: 2025/12/21 17:35:32 by pidi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -Iinclude -ILibft -Isrc

PRINTF_SRCS = src/ft_printf.c \
              src/ft_printchar.c \
              src/ft_printnbr.c \
              src/ft_printpercent.c \
              src/ft_printstr.c \
              src/ft_printptr.c \
              src/ft_print_unsigned.c \
              src/ft_hex_conversion.c \
              src/ft_print_hex.c

LIBFT_SRCS = Libft/ft_strlen.c \
             Libft/ft_putchar_fd.c \
             Libft/ft_putnbr_fd.c \
             Libft/ft_putstr_fd.c \
             Libft/ft_strdup.c

SRCS = $(PRINTF_SRCS) $(LIBFT_SRCS)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re
