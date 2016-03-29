/*
** my_putstr.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 15:28:12 2016 Lucas
** Last update Sat Feb 13 15:34:22 2016 Lucas
*/

#include "allum1.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i += 1;
  write(1, str, i);
}
