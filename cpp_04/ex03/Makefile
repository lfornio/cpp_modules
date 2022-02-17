NAME		= 	materia
SRCS		= 	main.cpp AMateria.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp
CC 			= 	c++ -std=c++98
FLAGS		=	-g -Wall -Wextra -Werror
RM			=	rm -f
INCLUDE		=	AMateria.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp Ice.hpp Cure.hpp Character.hpp
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
