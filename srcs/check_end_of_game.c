/*
** check_end_of_game.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 17:58:41 2016 Lucas
** Last update Sat Feb 13 19:00:02 2016 Lucas
*/

#include "allum1.h"

int	check_end_of_game(t_allum *allum)
{
  int	i;
  int	stock_empty;

  stock_empty = 0;
  i = 0;
  while (i != 4)
    {
      if (allum->board[i] == 0)
	stock_empty += 1;
      if (stock_empty == 4)
	return (1);
      i += 1;
    }
  return (0);
}
