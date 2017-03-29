SRC=ut_bzero.c\
	ut_cat.c\
	ut_isalnum.c\
	ut_isalpha.c\
	ut_isascii.c\
	ut_isdigit.c\
	ut_isprint.c\
	ut_memcpy.c\
	ut_memset.c\
	ut_puts.c\
	ut_strcat.c\
	ut_strdup.c\
	ut_tolower.c\
	ut_toupper.c\
	ut_strlen.c\
	test_is.c\
	test_to.c

SRCBONUS=ut_putchar.c

all:
	make re -C ../
	gcc -Wall -Wextra -Werror main.c $(SRC) $(SRCBONUS) test.h  -I ../includes/ -L ../ -lfts

fclean:
	rm -rf a.out

re: fclean all

