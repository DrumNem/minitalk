/*
** get_next_line.c for  in /home/perra_t/c
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Thu Feb 19 12:57:20 2015 tiphaine perra
** Last update Sun Feb 22 20:23:45 2015 tiphaine perra
*/

#include "my.h"

int	gnl_strlen(char *str)
{
  int	count;

  count = 0;
  while (str && str[count])
    count++;
  return (count);
}

char	*gnl_strcat(char *str, char *str2)
{
  int	i;
  int	j;
  char	*str_alloc;

  i = gnl_strlen(str);
  j = gnl_strlen(str2);
  if ((str_alloc = malloc(sizeof(char) * ((i + j) + 1))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (str && str[i] != '\0')
    str_alloc[j++] = str[i++];
  i = 0;
  while (str2 && str2[i] != '\0')
    str_alloc[j++] = str2[i++];
  str_alloc[j] = '\0';
  free(str);
  free(str2);
  return (str_alloc);
}

char	*gnl_strdup(char *src)
{
  char	*final;
  int	i;

  i = 0;
  if ((final = malloc(sizeof(char) * (gnl_strlen(src) + 1))) == NULL)
    return (NULL);
  while (src && src[i] != '\0')
    {
      final[i] = src[i];
      i++;
    }
  final[i] = '\0';
  return (final);
}

char	*gnl_case2(char *buf, int *i)
{
  char	*get_str;
  int	j;

  j = 0;
  if ((get_str = malloc(sizeof(char) * (BUFFER + 1))) == NULL)
    return (NULL);
  *i = 0;
  while (buf[*i] != '\n')
    {
      get_str[*i] = buf[*i];
      (*i)++;
    }
  get_str[*i] = '\0';
  *i += 1;
  while (buf[*i])
    buf[j++] = buf[(*i)++];
  buf[j] = '\0';
  return (get_str);
}

char	*get_next_line(const int fd)
{
  static char	buf[BUFFER + 1];
  int		i;
  int		rd;
  char		*str;

  i = 0;
  if (buf[0] == '\0')
    {
      if ((rd = read(fd, buf, BUFFER)) <= 0)
	return (NULL);
      buf[rd] = '\0';
    }
  while (buf[i])
    {
      if (buf[i] == '\n')
	return (gnl_case2(buf, &i));
      i++;
    }
  str = gnl_strdup(buf);
  buf[0] = '\0';
  return (gnl_strcat(str, get_next_line(fd)));
}
