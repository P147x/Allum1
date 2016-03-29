/*
** my_getnbr.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 15:48:37 2016 Lucas
** Last update Sat Feb 13 16:29:54 2016 Lucas
*/

#include "allum1.h"

int	my_getnbr(char *str)
{
  int	nb;
  int	negative;
  int	i;

  nb = 0;
  negative = 0;
  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	negative += 1;
      i += 1;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb = (nb * 10) + str[i] - '0';
      i += 1;
    }
  if (negative % 2 != 0)
    nb = nb * -1;
  return (nb);
}
