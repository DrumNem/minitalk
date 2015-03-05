/*
** mini.h for  in /home/perra_t/rendu/PSU_2014_minitalk/include
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Mon Mar  2 16:34:44 2015 tiphaine perra
** Last update Wed Mar  4 16:10:37 2015 tiphaine perra
*/

#ifndef MINI_H_
# define MINI_H_

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include "my.h"

typedef void (*sighandler_t)(int);

sighandler_t	signal(int, sighandler_t);

#endif
