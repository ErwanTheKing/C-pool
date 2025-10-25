##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

NAME = mini_printf

SRCS = sum_numbers.c \
	   sum_strings_length.c \
	   disp_stdarg.c

SRCST = sum_numbers.c \
	    sum_strings_length.c \
	    disp_stdarg.c

OBJS = $(SRCS:.c=.o)

TESTS = tests/test_units.c

CFLAGS = -I include/ -L lib/my -lmy

PFLAGS = -I include/ -L lib_printf/my -lmyprintf

TFLAGS = --coverage -lcriterion

all: $(NAME)

$(NAME): $(OBJS)
	make -C lib/my
	make -C lib_printf/my
	epiclang -o $(NAME) $(SRCS) $(CFLAGS) $(PFLAGS) -g3

clean:
	rm -f $(OBJS)
	make clean -C lib/my
	make clean -C lib_printf/my

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my
	make fclean -C lib_printf/my

re: fclean all

unit_tests:
	epiclang -o unit_tests $(SRCST) $(TESTS) $(CFLAGS) $(PFLAGS) $(TFLAGS)

tests_run: unit_tests
	./unit_tests
