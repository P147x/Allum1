/*
** my_pur_nbr.c for my_put_nbr in /home/debout_l/rendu/Piscine_C_J03
** 
** Made by Lucas DEBOUTE
** Login   <debout_l@epitech.net>
** 
** Started on  Mon Oct  5 08:19:48 2015 Lucas DEBOUTE
** Last update Sun Feb 14 19:13:20 2016 Lucas
*/

#include "allum1.h"

void	my_put_nbr(int nbr)
{
  int	i;
  int	aff;

  aff = 0;
  i = 1;
  if (nbr < 0)
    {
      nbr = nbr * (-1);
      my_putchar('-');
    }
  while ((nbr / i) > 10)
    {
      i = i * 10;
    }
  while (i > 0)
    {
      aff = (nbr / i);
      my_putchar(aff + 48);
      nbr = (nbr % i);
      i = i / 10;
    }
}
