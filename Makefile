# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 13:56:58 by acalmaz           #+#    #+#              #
#    Updated: 2023/06/05 13:57:01 by acalmaz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT = libft
FLAG = -Wall -Wextra -Werror
all: $(NAME)
		@gcc $(FLAG) server.c $(NAME) -o server
		@gcc $(FLAG) client.c $(NAME) -o client
$(NAME): $(LIBFT)
		@make -C $(LIBFT)
		@cp libft/libft.a .
		@echo "✅"
clean:
		@make clean -C $(LIBFT)
fclean: clean
		@make fclean -C $(LIBFT)
		@rm -rf $(NAME)
		@rm -rf server client
		@echo "🗑️"
re: fclean all

.PHONY: clean fclean all