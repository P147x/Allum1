/*
** board_initialiser.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 16:50:46 2016 Lucas
** Last update Sat Feb 13 17:27:58 2016 Lucas
*/

#include "allum1.h"

int	board_initialiser(t_allum *allum)
{
  int	i;
  int	b;

  i = 0;
  b = 1;
  while (i != 4)
    {
      allum->board[i] = b;
      b += 2;
      i += 1;
    }
  return (0);
}
