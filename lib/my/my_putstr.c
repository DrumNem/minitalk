/*
** my_putstr.c for my_putstr in /home/perra_t/rendu/Piscine_C_J04
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Thu Oct  2 20:26:56 2014 tiphaine perra
** Last update Fri Oct  3 16:39:04 2014 tiphaine perra
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
