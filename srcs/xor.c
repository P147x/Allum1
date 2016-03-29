/*
** ia.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 18:20:33 2016 Lucas
** Last update Mon Feb 22 00:30:07 2016 Lucas DEBOUTÉ
*/

#include "allum1.h"

int	last_one(t_allum *allum, int line_not_empty, int long_line)
{
  if ((line_not_empty % 2) == 1)
    {
      my_put_nbr(allum->board[long_line] - 1);
      allum->board[long_line] -= allum->board[long_line] - 1;
    }
  else if ((line_not_empty % 2) == 0)
    {
      my_put_nbr(allum->board[long_line]);
      allum->board[long_line] -= allum->board[long_line];
    }
  my_putstr(" match(es) from line ");
  my_put_nbr(long_line + 1);
  my_putstr("\n");
  return (1);
}

int	particular_condition_one(t_allum *allum)
{
  int	i;
  int	line_not_empty;
  int	line_one;
  int	long_line;

  i = 0;
  line_one = 0;
  line_not_empty = 0;
  long_line = 0;
  while (i < 4)
    {
      if (allum->board[i] > 0)
	{
	  if (allum->board[i] > 1 && long_line == 0)
	    long_line = i;
	  line_not_empty += 1;
	}
      if (allum->board[i] == 1)
	line_one += 1;
      i += 1;
    }
  if ((line_not_empty - line_one) == 1)
    return (last_one(allum, line_not_empty, long_line));
  return (0);
}

int	particular_condition_two(t_allum *allum)
{
  int	i;
  int	line_superior;

  i = 0;
  line_superior = check_line_superior_at_one(allum);
  if (line_superior == 0)
    {
      while (i < 4)
	{
	  if (allum->board[i] == 1)
	    {
	      allum->board[i] -= 1;
	      i = 4;
	    }
	  i += 1;
	}
      return (1);
    }
  return (0);
}

void	xor(t_allum *allum)
{
  int	xor;
  int	i;
  int	line;
  int	matches;

  i = 0;
  line = 0;
  matches = 0;
  xor = allum->board[0]^allum->board[1]^allum->board[2]^allum->board[3];
  while (i < 4)
    {
      matches = allum->board[i]^xor;
      if (matches < allum->board[i])
	{
	  matches = allum->board[i] - matches;
	  line = i;
	  i = 4;
	}
      i += 1;
    }
  my_put_nbr(matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(line + 1);
  my_putchar('\n');
  allum->board[line] -= matches;
}

void	ia(t_allum *allum)
{
  my_putstr("\nAI's turn...\nAI removed ");
  if (check_particular_condition(allum) == 0)
    xor(allum);
}
