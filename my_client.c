/*
** my_send2.c for  in /home/perra_t/TP/TP_Minitalk
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Wed Feb 25 16:46:58 2015 tiphaine perra
** Last update Wed Mar 11 15:49:54 2015 tiphaine perra
*/

#include "include/mini.h"
#include "include/my.h"

void	aff_msg(char **av)
{
  int	i;
  int	j;
  int	cha;
  pid_t	pid;
  char	*msg;

  pid = my_getnbr(av[1]);
  msg = av[2];
  i = 0;
  while (msg[i] != '\0')
    {
      j = 0;
      while (j < 8)
	{
	  cha = msg[i] & 1;
	  msg[i] = msg[i] >> 1;
	  if (cha == 0)
	    kill(pid, SIGUSR1);
	  else
	    kill(pid, SIGUSR2);
	  j++;
	  usleep(750);
	}
      i++;
    }
}

int     main(int ac, char **av)
{
  if (ac != 3)
    {
      my_printf("Please enter the server PID and then the message\n");
      return (0);
    }
  else
    aff_msg(av);
  return (0);
}
