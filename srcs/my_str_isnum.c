/*
** my_str_isnum.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sun Feb 14 20:11:28 2016 Lucas
** Last update Mon Feb 22 00:20:56 2016 Lucas DEBOUTÉ
*/

#include "allum1.h"

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] >  '9')
	{
	  my_putstr("Error: invalid input (positive number expected)\n");
	  return (-1);
	}
      i += 1;
    }
  return (my_getnbr(str));
}
