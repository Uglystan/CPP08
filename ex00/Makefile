# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 14:14:32 by lgirault          #+#    #+#              #
#    Updated: 2023/08/06 14:35:54 by lgirault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Easyfind
CC = c++
FLAGS = -Wall -Wextra -Werror
C98 = -std=c++98
RM = rm -rf

SRC =	main.cpp \

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(FLAGS) $(C98) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(C98) $(OBJ) -o $(NAME)

all : $(NAME)

clean : 
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

re : fclean all