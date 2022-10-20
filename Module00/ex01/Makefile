CXX			= clang++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

FILES	= Contact.cpp PhoneBook.cpp main.cpp
OBJS	:= $(FILES:.cpp=.o)

%.o : %.cpp
	@echo CXX $<
	@$(CXX) $(CPPFLAGS) -c -o $@ $<

phonebook: $(OBJS)
	@$(CXX) -o $@ $^

clean:
	$(RM) $(OBJS) phonebook