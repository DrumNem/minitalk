##
## Makefile for  in /home/perra_t/rendu/CPE_2014_Pushswap
## 
## Made by tiphaine perra
## Login   <perra_t@epitech.net>
## 
## Started on  Tue Dec  2 13:48:43 2014 tiphaine perra
## Last update Fri Feb 20 10:41:00 2015 tiphaine perra
##

SRC     =	get_next_line.c \
		my_putnbr_long.c \
		my_printf.c \
		my_str_isnum.c \
		my_getnbr.c \
		my_putchar.c \
		my_putnbr_base.c \
		my_put_nbr.c \
		my_putstr.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcpy.c \
		my_strncpy.c \
		my_strlen.c \
		my_swap.c

OBJS    =       $(SRC:.c=.o)

NAME    =       libmy.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib  $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
