/*
** ia.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 18:20:33 2016 Lucas
** Last update Thu Feb 18 12:51:02 2016 Lucas
*/

#include "allum1.h"

void	ia(t_allum *allum)
{
  int	random;
  int	random_match;

  random = 0;
  random_match = 0;
  my_putstr("\nAI's turn...\n");
  while (allum->board[random] == 0)
    random = rand() % 4;
  if (allum->board[random] == 1)
    random_match = 1;
  else
    while (random_match == 0)
      random_match = rand() % allum->board[random];
  allum->board[random] -= random_match;
  my_putstr("AI removed ");
  my_put_nbr(random_match);
  my_putstr(" match(es) from line ");
  my_put_nbr(random + 1);
  my_putchar('\n');
}
