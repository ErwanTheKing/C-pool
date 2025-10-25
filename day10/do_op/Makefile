##
## EPITECH PROJECT, 2025
## makefile
## File description:
## makefile
##

NAME	= compil

SRC	= do_op.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	epiclang -o do-op do_op.c main.c -L ../lib/my -lmy

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)
	$(RM) $(OBJ)

re: fclean all
