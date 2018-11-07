##
## EPITECH PROJECT, 2018
## Makefile day10
## File description:
## 
##

NAME = unit_tests_match
NAMEN = unit_tests_nmatch

SRC = match.c \
	nmatch.c \
	lib/my/my_strlen.c \
	  tests/test_match.c
SRCN = nmatch.c \
	match.c \
	lib/my/my_strlen.c \
	tests/test_nmatch.c

OBJ =	$(SRC:.c=.o)

INC =	-I./include \

CFLAGS= $(INC)	\
	-W	\
	-Wall	\
	-Wextra	\

CRIFLAGS= 	$(INC) \
		-lcriterion	\
		--coverage 	\
		-W		\
		-Wall		\
		-Wextra		\

LDFLAGS= -lmy   \
         -L./lib/my \

CC =	gcc

RULE =	all

RM = rm -vf

TESTFILE = *.g*

all:    $(NAME)


$(NAME):$(OBJ)
	$(CC) -o $(NAME) $(CRIFLAGS) $(SRC)
	$(CC) -o $(NAMEN) $(CRIFLAGS) $(SRCN)

clean:
	$(RM) $(OBJ) $(TESTFILE) 

fclean:	clean
	$(RM) $(NAME) $(NAMEN)

re:	fclean all
