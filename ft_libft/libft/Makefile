# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-bouk <yel-bouk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 18:37:34 by yahiaelbouk       #+#    #+#              #
#    Updated: 2024/11/11 17:50:11 by yel-bouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_atoi.c \
       ft_bzero.c \
       ft_memset.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_memmove.c \
       ft_strnstr.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_substr.c \
       ft_strtrim.c \
       ft_strjoin.c \
       ft_split.c \
       ft_striteri.c

SRCS_BONUS = ft_lstnew.c \
             ft_lstadd_front.c \
             ft_lstsize.c \
             ft_lstlast.c \
             ft_lstadd_back.c \
             ft_lstdelone.c \
             ft_lstclear.c \
             ft_lstiter.c \
             ft_lstmap.c 

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: OBJS += $(OBJS_BONUS)
bonus: $(OBJS_BONUS) $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
