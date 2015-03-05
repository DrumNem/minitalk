/*
** my_printf.c for  in /home/perra_t/rendu/PSU_2014_my_printf
** 
** Made by tiphaine perra
** Login   <perra_t@epitech.net>
** 
** Started on  Thu Nov 13 14:31:11 2014 tiphaine perra
** Last update Sun Nov 16 23:40:29 2014 tiphaine perra
*/

#include <stdarg.h>
#include <stdio.h>

int		my_putnbr_base(unsigned int nbr, char *base)
{
  int		div;
  int		len_base;
  int		i;

  i = 0;
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
      i++;
    }
  return (i + 1);
}

int		my_no_printable(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] <= 126)
	my_putchar(str[i]);
      else
	{
	  my_putchar('\\');
	  my_putnbr_base(str[i], "01234567");
	}
      i++;
    }
  return (i);
}

int		flag1(char *str, va_list args, int *i)
{
  if (str[*i] == 'c')
    my_putchar(va_arg(args, int));
  else if (str[*i] == 's')
    my_putstr(va_arg(args, char*));
  else if (str[*i] =='S')
    my_no_printable(va_arg(args, char*));
  else if (str[*i] == 'p')
    {
      my_putstr("0x");
      my_putnbr_base_long(va_arg(args, long), "0123456789abcdef");
    }
  else if (str[*i] == '%' || str[*i] == ' ')
    my_putchar('%');
  else if (str[*i] == 'u')
    my_putnbr_base(va_arg(args, unsigned int), "0123456789");
  else if (str[*i] == 'x')
    my_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
  else if (str[*i] == 'o')
    my_putnbr_base(va_arg(args, unsigned int), "01234567");
}

int		flag2(char *str, va_list args, int *i)
{
  if (str[*i] == 'X')
    my_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
  else if (str[*i] == 'o')
    my_putnbr_base(va_arg(args, unsigned int), "01234567");
  else if (str[*i] == 'b')
    my_putnbr_base(va_arg(args, unsigned int), "01");
  else if (str[*i] == 'i' || str[*i] == 'd')
    my_put_nbr(va_arg(args, int));
  else
    flag1(str, args, i);
}

int		my_printf(char *str, ...)
{
  int		i;
  va_list	args;

  i = 0;
  va_start(args, str);
  while (str && str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  i++;
	  flag2(str, args, &i);
	}
      else
	my_putchar(str[i]);
      i++;
    }
  va_end(args);
}
