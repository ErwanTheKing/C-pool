##
## EPITECH PROJECT, 2025
## makefile
## File description:
## makefile
##

NAME	= libmyprintf.a

SRC	= my_put_nbr_printf.c \
	  my_putstr_printf.c \
	  my_putchar_printf.c \
	  my_putchar.c \
	  my_put_nbr.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp myprintf.h ../../include/

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
	rm -f $(OBJ)

re: fclean all
