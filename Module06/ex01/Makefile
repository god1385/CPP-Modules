# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macbook <macbook@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 18:59:33 by hjanis            #+#    #+#              #
#    Updated: 2022/10/18 18:14:29 by macbook          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Data
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic


SRCS = main.cpp
INCL = Data.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(INCL) 
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@clear
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean