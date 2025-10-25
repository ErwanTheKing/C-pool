##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefil for compil
##

NAME = compil

CFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

SRCS = task01.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	epiclang -o $(NAME) $(SRCS) $(CFLAGS)

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all
