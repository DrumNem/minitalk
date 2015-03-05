/*
** strncmp.c for  in /home/perra_t/rendu/Piscine_C_J06/ex_06
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Tue Oct  7 10:17:32 2014 tiphaine perra
** Last update Tue Oct  7 14:38:39 2014 tiphaine perra
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
      i = i + 1;
    }
  if (i == n)
    return (0);
  return (s1[i] - s2[i]);
}
