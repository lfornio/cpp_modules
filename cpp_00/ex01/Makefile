NAME		= 	phonebook
SRCS		= 	Phonebook.cpp Contact.cpp main.cpp
CC 			= 	c++ -std=c++98
FLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f
INCLUDE		=	Phonebook.hpp Contact.hpp
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
