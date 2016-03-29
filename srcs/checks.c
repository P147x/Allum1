/*
** checks.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas DEBOUTÉ
** Login   <lucas@epitech.net>
** 
** Started on  Fri Feb 19 16:45:43 2016 Lucas DEBOUTÉ
** Last update Fri Feb 19 16:45:45 2016 Lucas DEBOUTÉ
*/

#include "allum1.h"

int	check_line_superior_at_one(t_allum *allum)
{
  int	i;

  i = 0;
  while (i < 4)
    {
      if (allum->board[i] > 1)
	return (1);
      i += 1;
    }
  return (0);
}

int	check_particular_condition(t_allum *allum)
{
  if (particular_condition_one(allum) == 1)
    return (1);
  else if (particular_condition_two(allum) == 1)
    return (1);
  return (0);
}
