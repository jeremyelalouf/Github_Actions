##
## EPITECH PROJECT, 2021
## makfile
## File description:
## compile
##

LIB			=		$(addsuffix .c,			\
					my_char_isalpha			\
					my_char_islower			\
					my_char_isnum			\
					my_char_isprintable		\
					my_compute_power_rec	\
					my_compute_square_root	\
					my_copy_tab				\
					my_find_prime_sup		\
					my_strtok				\
					my_free_array			\
					my_getnbr				\
					my_gets					\
					my_is_prime				\
					my_isneg				\
					my_len_cmp				\
					my_malloc_tab			\
					my_memset				\
					my_putarray				\
					my_putchar				\
					my_putnbr				\
					my_putstr				\
					my_revstr				\
					my_str_isalpha			\
					my_str_islower			\
					my_str_isnum			\
					my_str_isprintable		\
					my_str_isupper			\
					my_strcapitalize		\
					my_strcat				\
					my_strcmp				\
					my_strcpy				\
					my_strdup				\
					my_strlen				\
					my_strlowcase			\
					my_strncat				\
					my_strncmp				\
					my_strncpy				\
					my_strupcase			\
					my_str_to_word_array	\
					my_swap					\
					my_tablen				\
					)

OBJ			=		$(LIB:.c=.o)

CFLAGS		=		-I./includes

CPPFLAGS	=		-Wall -Wextra

AR			=		ar rc

RM			=		rm -f

CP			=		cp

NAME		=		libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)
	chmod +x $(NAME)
	$(CP) $(NAME) ../
	$(CP) my.h ../../includes/
	@echo -e "\e[92;5m MADE \e[0m"

clean:
	$(RM) $(OBJ)
	@echo -e "\e[31mCLEANED\033[0m"

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	@echo -e "\e[31mFCLEANED\033[0m"

re:	fclean	all
