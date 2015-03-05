/*
** my_put_nbr.c for  in /home/perra_t/rendu/Piscine_C_J07/lib/my
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Wed Oct  8 12:41:04 2014 tiphaine perra
** Last update Sun Nov 16 15:21:24 2014 tiphaine perra
*/

int	lim_neg()
{
  my_putchar('-');
  my_putchar('2');
  my_putchar('1');
  my_putchar('4');
  my_putchar('7');
  my_putchar('4');
  my_putchar('8');
  my_putchar('3');
  my_putchar('6');
  my_putchar('4');
  my_putchar('8');
  return (0);
}

int	my_put_nbr(int nb)
{
  int	p;
  int	c;

  p = 1;
  if (nb == -2147483648)
    return (lim_neg());
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  while (p * 10 <= nb && p < 1000000000)
    {
      p = p * 10;
    }
  while (p >= 1)
    {
      my_putchar(nb / p + '0');
      nb = nb % p;
      p = p / 10;
    }
  return (0);
}
