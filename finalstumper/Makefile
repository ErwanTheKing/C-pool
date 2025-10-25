##
## EPITECH PROJECT, 2025
## makefile
## File description:
## a banger
##

# ─── Project Info ────────────────────────────────────────────────────────
PROJECT = Final_Stumper
NAME	= rush3

# ─── Sources ─────────────────────────────────────────────────────────────
SRC	= rush3.c
SRCT	= rush3t.c \
	  tests/unit_tests.c

# ─── Flags ───────────────────────────────────────────────────────────────
LIBSFLAGS = -L ./lib -I ./include -lmy -O3
DEBUGFLAGS = -L ./lib -I ./include -lmy -g3
TFLAGS = --coverage -lcriterion -lgcov

# ─── Tools ───────────────────────────────────────────────────────────────
OBJ = $(SRC:.c=.o)
RM = rm -rf
ECC = epiclang
CC = clang
LIBS = -L ./lib -I ./include -lmy

%.o: %.c
	$(ECC) -c $< -o $@

all:	$(NAME)

$(NAME): lib $(OBJ)
	cp lib/my/my.h include/
	make -C lib/my
	$(ECC) -o $(NAME) $(SRC) $(LIBSFLAGS) 

unit_tests:
	$(CC) -o unit_tests $(SRCT) $(TFLAGS) $(LIBSFLAGS)

tests_run: unit_tests
	./unit_tests
	gcovr --gcov-executable "llvm-cov-20 gcov" --exclude tests/unit_tests.c
	gcovr --gcov-executable "llvm-cov-20 gcov" --exclude tests/unit_tests.c --branches

debug:
	$(CC) -o $(NAME) $(SRC) $(DEBUGFLAGS)
	valgrind ./$(NAME)

lib:
	make -C lib/my/

clean:
	$(RM) $(OBJ)
	make clean -C lib/my/

fclean: clean
	$(RM) $(NAME) *.gcda *.gcno unit_tests testing testing
	make fclean -C lib/my/

re: fclean all lib
