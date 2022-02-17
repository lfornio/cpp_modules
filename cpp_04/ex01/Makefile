NAME		= 	animal
SRCS		= 	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
CC 			= 	c++ -std=c++98
FLAGS		=	-g -Wall -Wextra -Werror
RM			=	rm -f
INCLUDE		=	Animal.hpp Dog.hpp Cat.hpp Brain.hpp
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
