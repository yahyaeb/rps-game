# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/16 17:10:45 by yel-bouk          #+#    #+#              #
#    Updated: 2025/02/16 17:19:44 by yel-bouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = ft_libft.a
CC = CC
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

LIBFT_DIR = libft
PRINTF_DIR = ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprint.a

all: $(LIBFT) $(PRINTF) $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

$(NAME): $(LIBFT) $(PRINTF)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(PRINTF_DIR)/*.o

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(PRINTF_DIR) clean
	
fclean: clean
	make -C $(LIBFT_DIR) fclean
	make -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

re: fclean all