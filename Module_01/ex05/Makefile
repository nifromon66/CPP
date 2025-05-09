# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nifromon <nifromon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 00:27:28 by nifromon          #+#    #+#              #
#    Updated: 2025/05/09 05:39:48 by nifromon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Argument
NAME =				Harl

# Compiler
CPP =				@c++
CPPFLAGS =			-Wall -Werror -Wextra -std=c++98 -I $(INCLUDE)

# Directories
SRC_DIR =			src
OBJ_DIR =			obj
INCLUDE =			include

# Utils
RM =				@rm -rf

# Colors
BLACK_ON_GREEN =	\033[30;42m
BLACK_ON_RED =		\033[30;41m
YELLOW =			\033[1;33m
GREEN =				\033[1;32m
RED =				\033[1;31m
RESET =				\033[1;0m

# Sources and objects
SRC =				\
					$(SRC_DIR)/main.cpp \
					$(SRC_DIR)/Harl.class.cpp
					
OBJ =				$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Rules and dependencies
all:				$(NAME)

$(NAME):			$(OBJ)
					@echo "$(YELLOW)Building $(NAME)...$(RESET)"
					$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)
					@echo "$(BLACK_ON_GREEN)\t\t\t\t\t*/ $(NAME) \*$(RESET)"

$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.cpp
					@mkdir -p $(dir $@)
					$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
					@echo "$(YELLOW)Cleaning $(OBJ_DIR)...$(RESET)"
					$(RM) $(OBJ_DIR)
					@echo "$(RED)Cleaned $(OBJ_DIR) $(RESET)"

fclean:				clean
					@echo "$(YELLOW)Forcefully cleaning $(NAME)...$(RESET)"
					$(RM) $(NAME)
					@echo "$(BLACK_ON_RED)\t\t\t\t\t*/ $(NAME) \*$(RESET)"

re:				fclean all

.PHONY:			all clean fclean re
