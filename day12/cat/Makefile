##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

NAME = cat

SRCS = 	main.c \
	cat.c

OBJS = $(SRCS:.c=.o)

TESTS = ../tests/test_cat.c

CFLAGS = -L ../lib/my -lmy

CRFLAGS = --coverage -lcriterion

all: $(NAME)

$(NAME): $(OBJS)
	make -C ../lib/my
	epiclang -o $(NAME) $(SRCS) $(CFLAGS)

clean:
	rm -f $(OBJS)
	make clean -C ../lib/my

fclean: clean
	rm -f $(NAME)
	make fclean -C ../lib/my

re: fclean all

unit_tests: all
	epiclang -o unit_tests cat.c $(TESTS) $(CFLAGS)  $(CRFLAGS)

tests_run: unit_tests
	./unit_tests
