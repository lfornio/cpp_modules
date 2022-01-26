NAME		= 	zombie
SRCS		= 	Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
CC 			= 	g++
FLAGS		=	-g -Wall -Wextra -Werror
RM			=	rm -f
INCLUDE		=	Zombie.hpp
OBJS		=	$(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

${NAME}: $(OBJS) $(INCLUDE)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


all : $(NAME)

clean :
	$(RM) $(OBJS)


fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re