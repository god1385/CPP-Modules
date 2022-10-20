CXX			= clang++
CPPFLAGS	= -Wall -Werror -Wextra

FILES	= main.cpp
OBJS	:= $(FILES:.cpp=.o)

%.o : %.cpp
	@echo CXX $<
	@$(CXX) $(CPPFLAGS) -c -o $@ $<

replace: $(OBJS)
	@$(CXX) -o $@ $^

clean:
	$(RM) $(OBJS) replace