# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/06 16:23:48 by lgirault          #+#    #+#              #
#    Updated: 2023/08/06 16:24:02 by lgirault         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC = c++
FLAGS = -Wall -Wextra -Werror
C98 = -std=c++98
RM = rm -rf

SRC =	main.cpp \
	Span.cpp \

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