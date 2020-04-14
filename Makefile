##
## EPITECH PROJECT, 2020
## 110borwein
## File description:
## Makefile
##

NAME	=	110borwein

SRC	=	src/main.c 		\
		src/display_help.c	\
		src/error_handling.c	\
		src/my_strcmp.c

CC	?=	gcc

CFLAGS	=	-W -Wextra -Wall

CPPFLAGS	=	-I./include/

LDFLAGS	=	-lm

CFFLAGS	=	tests/unit_tests.c -I./include --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

name	:	all

all	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

tests_run	:
		$(CC) -o unit_tests src/*.c $(CFFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)		\
		rm -f *# 		\
		rm -f src/*# 		\
		rm -f include/*# 	\
		rm -f *~ 		\
		rm -f src/*~ 		\
		rm -f include/*~ 	\
		rm -f *.gcda 		\
		rm -f *.gcno		\

re	:	fclean all

.PHONY	:	name all debug tests_run clean fclean re
