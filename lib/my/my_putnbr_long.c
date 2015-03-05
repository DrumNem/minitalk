/*
** my_putnbr_long.c for  in /home/perra_t/rendu/PSU_2014_my_printf/lib/my
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Sun Nov 16 21:56:21 2014 tiphaine perra
** Last update Thu Feb 19 14:05:08 2015 tiphaine perra
*/

int		my_putnbr_base_long(long nbr, char *base)
{
  long		div;
  long		len_base;

  len_base = my_strlen(base);
  div = 1;
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  while (div * len_base <= nbr)
    div *= len_base;
  while (div >= 1)
    {
      my_putchar(base[nbr/div]);
      nbr = nbr % div;
      div = div / len_base;
    }
  return (0);
}
