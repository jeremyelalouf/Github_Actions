##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC			=		$(addsuffix .c,				\
					main)						\

SRC_TEST	=		tests/tests_unit.c			\

OBJ			=		$(SRC:.c=.o)

NAME_TEST	=		unit_tests

NAME		=		pushswap

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	@echo -e "\e[92;5m MADE \e[0m"

debug:	CPPFLAGS += -g3
debug:	all

debug_re:	CPPFLAGS += -g3
debug_re:	re

clean:
	$(RM) $(OBJ)
	@echo -e "\e[35mCLEANED\033[0m"

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(NAME_TEST)
	$(RM) *.gcno *.gcda
	@echo -e "\e[31mCLEANED\033[0m"

re:	fclean	all

tests_run:	LDFLAGS += --coverage -lcriterion
tests_run: fclean
	$(CC) -o $(NAME_TEST) $(CPPFLAGS) $(CFLAGS) $(SRC_TEST)
	./$(NAME_TEST)
	gcovr --exclude tests
	gcovr --branches --exclude tests

.PHONY: mysh debug debug_re clean fclean re tests_run
