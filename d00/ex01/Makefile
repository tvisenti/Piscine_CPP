# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 14:21:49 by tvisenti          #+#    #+#              #
#    Updated: 2017/03/30 17:03:41 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = nokia

all: $(NAME)

nokia:
	@$(CC) $(FLAGS) main.cpp -o nokia
	@echo "\033[1;34mD00\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@rm -rf nokia.o
	@echo "\033[1;34mD00\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf nokia
	@rm -rf a.out
	@echo "\033[1;34mD00\t\033[1;33mCleaning all\t\033[0;32m[OK]\033[0m"

re: fclean all
