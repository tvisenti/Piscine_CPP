# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/04 08:44:37 by tvisenti          #+#    #+#              #
#    Updated: 2017/04/04 13:44:22 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = rename

all: $(NAME)

rename:
	@$(CC) $(FLAGS) main.cpp -o $(NAME)
	@echo "\033[1;34mD01\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@rm -rf main.o
	@echo "\033[1;34mD01\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf a.out
	@echo "\033[1;34mD01\t\033[1;33mCleaning all\t\033[0;32m[OK]\033[0m"

re: fclean all
