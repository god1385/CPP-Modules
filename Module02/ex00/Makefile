NAME = Fixed
CXX = c++
RM = rm -f
CXXFLAGS = -I -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = Fixed.cpp main.cpp
INCL = Fixed.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME) $(INCL)  

$(NAME): $(OBJS) $(INCL)  
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	@clear
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
