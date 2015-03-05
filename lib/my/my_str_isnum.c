/*
** my_str_isnum.c for  in /home/perra_t/rendu/Piscine_C_J06/ex_11
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Tue Oct  7 21:47:21 2014 tiphaine perra
** Last update Fri Feb 20 10:47:17 2015 tiphaine perra
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while ((str[i] >= '0' && str[i] <= '9') && (str[i] != '\0'))
    {
      i = i + 1;
    }
  if (str[i] == '\0')
    return (1);
  return (0);
}
