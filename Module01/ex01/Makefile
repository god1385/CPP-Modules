CXX			= clang++
CPPFLAGS	= -Wall -Werror -Wextra

FILES	= main.cpp ZombieHorde.cpp Zombie.cpp
OBJS	:= $(FILES:.cpp=.o)

%.o : %.cpp
	@echo CXX $<
	@$(CXX) $(CPPFLAGS) -c -o $@ $<

Brainzz: $(OBJS)
	@$(CXX) -o $@ $^

clean:
	$(RM) $(OBJS) Brainzz