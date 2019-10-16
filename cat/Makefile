##
## EPITECH PROJECT, 2019
## makefile task01
## File description:
## compilation prgrame
##

SRCS 	= 	concat_params.c			\
		my_put_nbr.c			\
		my_str_islower.c		\
		my_putstr.c			\
		my_str_isprintable.c		\
		my_compute_factorial_rec.c	\
		my_showmem.c			\
		my_str_isupper.c		\
		my_compute_power_rec.c		\
		my_show_word_array.c		\
		my_strlowcase.c			\
		my_compute_square_root.c	\
		my_sort_int_array.c		\
		my_strncat.c			\
		my_find_prime_sup.c		\
		my_strcapitalize.c		\
		my_strncpy.c			\
		my_getnbr.c			\
		my.h				\
		my_strcmp.c			\
		my_strstr.c			\
		my_isneg.c			\
		my_strcpy.c			\
		my_str_to_word_array.c		\
		my_isneg.c			\
		my_strcpy.c			\
		my_str_to_word_array.c		\
		my_is_prime.c			\
		my_strdup.c			\
		my_strupcase.c			\
		my_putchar.c			\
		my_str_isalpha.c		\
		my_swap.c			\

OBJS	=	$(SRCS:.c=.o)

NAME	=	cat

CC	= 	gcc 

RM	=	rm -rf

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) $(NAME) -I../include/my.h $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re



