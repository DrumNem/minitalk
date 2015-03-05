/*
** my.h for  in /home/perra_t/rendu/Piscine_C_J07/include
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Wed Oct  8 14:44:01 2014 tiphaine perra
** Last update Fri Feb 20 10:40:47 2015 tiphaine perra
*/

#ifndef MY_H_
# define MY_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER 100

void	my_putchar(char);
int	my_putnbr_base_long(long, char*);
int	my_put_nbr(int);
int	my_str_isnum(char*);
int	my_put_nbr_base(int, char *);
int	my_swap(int *, int *);
int	my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
char	*my_strcpy(char *, char *);
char	*my_strncpy(char *, char *, int);
int	my_strcmp(char *, char *);
int	my_strncmp(char *, char *, int);
char	*get_next_line(const int);
int	my_printf(char *, ...);

#endif
