/*
** my_putnbr_base.c for  in /home/perra_t/c
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Thu Nov 13 15:06:37 2014 tiphaine perra
** Last update Thu Nov 13 15:13:09 2014 tiphaine perra
*/

int	my_putnbr_base(int nbr, char *base)
{
  int   div;
  int	size_base;

  size_base = my_strlen(base);
  div = 1;
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  while (div * size_base <= nbr)
    div *= size_base;
  while (div >= 1)
    {
      my_putchar(base[nbr/div]);
      nbr = nbr % div;
      div = div / size_base;
    }
}
