/*
** board_printer.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 17:41:30 2016 Lucas
** Last update Tue Feb 16 19:56:56 2016 Lucas
*/

#include "allum1.h"

int	print(t_allum *allum, int cursor, int spaces, int line)
{
  while (cursor != spaces)
    {
      my_putchar(' ');
      cursor += 1;
    }
  while (cursor != (spaces + allum->board[line]))
    {
      my_putchar('|');
      cursor += 1;
    }
  while (cursor != 7)
    {
      my_putchar(' ');
      cursor += 1;
    }
  return (cursor);
}

void	board_printer(t_allum *allum)
{
  int	line;
  int	cursor;
  int	spaces;

  cursor = 0;
  spaces = 3;
  line = 0;
  my_putstr("*********\n");
  while (line != 4)
    {
      my_putchar('*');
      print(allum, cursor, spaces, line);
      spaces -= 1;
      line += 1;
      my_putstr("*\n");
    }
  my_putstr("*********\n");
}
