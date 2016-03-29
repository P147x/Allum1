/*
** player_turn.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 15:45:15 2016 Lucas
** Last update Mon Feb 22 00:34:09 2016 Lucas DEBOUTÉ
*/

#include "allum1.h"

int	error_line_range(t_allum *allum, int get_line)
{
  if (get_line == NULL && get_line != 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (1);
    }
  if (get_line <= 0 || get_line > 4)
    {
      my_putstr("Error: this line is out of range\n");
      return (1);
    }
  if (allum->board[get_line - 1] == 0)
    {
      my_putstr("Error: this line is empty\n");
      return (1);
    }
  return (0);
}

void	resume_of_turn(int get_line, int get_match)
{
  my_putstr("Player removed ");
  my_put_nbr(get_match);
  my_putstr(" match(es) from line ");
  my_put_nbr(get_line);
  my_putchar('\n');
}

int	check_match_errors(int get_match, int get_line, t_allum *allum)
{
  if (get_match == NULL && get_match != 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (1);
    }
  if (get_match == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (1);
    }
  if (get_match > allum->board[get_line - 1] ||
      get_line == NULL)
    {
      my_putstr("Error: not enough matches on this line\n");
      return (1);
    }
  return (0);
}

int	player_turn(t_allum *allum)
{
  int	get_line;
  int	get_match;
  char	*choice;

  my_putstr("Line: ");
  choice = get_next_line(0);
  if (choice == NULL || (get_line = my_str_isnum(choice) == -1))
    return (1);
  get_line = my_getnbr(choice);
  if (error_line_range(allum, get_line) == 1)
    return (1);
  my_putstr("Matches: ");
  if ((choice = get_next_line(0)) == NULL
      || (get_match = my_str_isnum(choice)) == -1)
    return (1);
  if (check_match_errors(get_match, get_line, allum) == 1)
    return (1);
  allum->board[get_line - 1] -= get_match;
  resume_of_turn(get_line, get_match);
  return (0);
}
