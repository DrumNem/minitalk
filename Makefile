##
## Makefile for  in /home/perra_t/rendu/PSU_2014_minitalk
## 
## Made by tiphaine perra
## Login   <perra_t@epitech.net>
## 
## Started on  Thu Feb 26 16:13:40 2015 tiphaine perra
## Last update Tue Mar 24 10:39:18 2015 tiphaine perra
##

LDFLAGS =	-Llib/my -lmy

SRC_S	=	server/my_serveur.c

SRC_C	=	client/my_client.c

OBJ_S	=	$(SRC_S:.c=.o)

OBJ_C	=	$(SRC_C:.c=.o)

NAME_S	=	server

NAME_C	=	client

all:	$(NAME_S) $(NAME_C)

$(NAME_S):	$(OBJ_S)
	cc -o serv $(OBJ_S) $(LDFLAGS)
	mv serv ./server/$(NAME_S)

$(NAME_C):	$(OBJ_C)
	cc -o cli $(OBJ_C) $(LDFLAGS) 
	mv cli ./client/$(NAME_C)

clean:
	rm -f $(OBJ_S)
	rm -f $(OBJ_C)

fclean:	clean
	rm -f ./server/$(NAME_S)
	rm -f ./client/$(NAME_C)

re:	fclean all

.PHONY:       all clean fclean re
