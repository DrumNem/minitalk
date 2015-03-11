##
## Makefile for  in /home/perra_t/rendu/PSU_2014_minitalk
## 
## Made by tiphaine perra
## Login   <perra_t@epitech.net>
## 
## Started on  Thu Feb 26 16:13:40 2015 tiphaine perra
## Last update Wed Mar 11 11:13:48 2015 tiphaine perra
##

SRC_S	=	my_serveur.c

OBJ_S	=	$(SRC_S:.c=.o)

NAME_S	=	server

CFLAGS	+=	-I ./include/ -W -Wall -pedantic -ansi -D_BSD_SOURCE -D_XOPEN_SOURCE

LDFLAGS +=      -Llib/my

LDLIBS  +=      -lmy -lm

SRC_C	=	my_client.c

OBJ_C	=	$(SRC_C:.c=.o)

NAME_C	=	client

all	:	$(NAME_S) $(NAME_C)

$(NAME_S):	$(OBJ_S)
	@$(CC) $(CFLAGS) -o $(NAME_S) $(OBJ_S) $(LDFLAGS) $(LDLIBS)

$(NAME_C):	$(OBJ_C)
	@$(CC) $(CFLAGS) -o $(NAME_C) $(OBJ_C) $(LDFLAGS) $(LDLIBS)

clean	:
	@$(RM) $(OBJ_S)
	@$(RM) $(OBJ_C)

fclean	:	clean
	@$(RM) $(NAME_S)
	@$(RM) $(NAME_C)

re	:	fclean all

.PHONY  :       all clean fclean re