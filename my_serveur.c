/*
** my_receive2.c for  in /home/perra_t/TP/TP_Minitalk
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Wed Feb 25 16:51:57 2015 tiphaine perra
** Last update Wed Mar 11 16:15:11 2015 tiphaine perra
*/

#include "include/mini.h"
#include "include/my.h"

void		catch(int sign)
{
  static int	k = 0;
  static char	letter = 0;

  if (sign == SIGUSR1)
    letter &= ~(1 << k);
  else
    letter |= (1 << k);
  k++;
  if (k == 8)
    {
      my_printf("%c", letter);
      letter = 0;
      k = 0;
    }
  return ;
}

void		aff_pid()
{
  pid_t		pid;

  pid = getpid();
  my_printf("%d\n", pid);
}

int		main()
{
  char		*buffer;

  buffer = 0;
  aff_pid();
  signal(SIGUSR1, catch);
  signal(SIGUSR2, catch);
  read(0, buffer, 1);
  return (0);
}
