##
## Makefile for  in /home/perra_t/rendu/PSU_2014_minitalk
## 
## Made by tiphaine perra
## Login   <perra_t@epitech.net>
## 
## Started on  Thu Feb 26 16:13:40 2015 tiphaine perra
## Last update Wed Mar 11 16:14:39 2015 tiphaine perra
##

LDFLAGS =	-Llib/my -lmy

SRC_S	=	my_serveur.c

SRC_C	=	my_client.c

OBJ_S	=	$(SRC_S:.c=.o)

OBJ_C	=	$(SRC_C:.c=.o)

NAME_S	=	server

NAME_C	=	client

all:	$(NAME_S)

$(NAME_S):	$(OBJ_S) $(OBJ_C)
	cc -o $(NAME_S) $(OBJ_S) $(LDFLAGS)
	cp $(NAME_S) Server/$(NAME_S)
	cc -o $(NAME_C) $(OBJ_C) $(LDFLAGS)
	cp $(NAME_C) Client/$(NAME_C)


clean:
	rm -f $(OBJ_S)
	rm -f $(OBJ_C)

fclean:	clean
	rm -f $(NAME_S)
	rm -f $(NAME_C)

re:	fclean all

.PHONY:       all clean fclean re
