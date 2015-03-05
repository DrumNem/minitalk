/*
** my_strcmp.c for  in /home/perra_t/rendu/Piscine_C_J06
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Mon Oct  6 21:51:36 2014 tiphaine perra
** Last update Tue Oct  7 13:16:34 2014 tiphaine perra
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
      i = i + 1;
    }
  return (s1[i] - s2[i]);
}
