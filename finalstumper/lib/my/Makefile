##
## EPITECH PROJECT, 2025
## makefile
## File description:
## makefile m
##

NAME = libmy.a

SRC	= my_strlen.c \
      my_putchar.c \
      my_put_nbr.c \
      my_putstr.c

OBJ	= $(SRC:.c=.o)

RM = rm -rf

ECC = epiclang

%.o: %.c
	$(ECC) -L../lib -lmy -Wno-unused-command-line-argument -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include/

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)
	$(RM) $(OBJ)

re: fclean all
