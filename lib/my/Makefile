##
## EPITECH PROJECT, 2018
## Makefile lib day10
## File description:
## 
##

NAME = libmy.a
SRC =	my_strlen.c			
OBJ =   $(SRC:.c=.o)

CFLAGS =-c      \
        -W      \
        -Wall   \
        -Wextra \

CC =    gcc

INCDIR = .

INCDEST = ../../include/

INCSRC = my.h

LIBCOMP = ar rc

RULE =  all

RM = rm -vf

CP = cp

DIRLIB = ../

all:    $(NAME)

$(NAME):$(OBJ)
	$(CC) -c $(SRC) $(INC)
	$(LIBCOMP) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
re:     fclean all
