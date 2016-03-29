/*
** allu.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 15:11:40 2016 Lucas
** Last update Mon Feb 22 00:36:56 2016 Lucas DEBOUTÉ
*/

#include "allum1.h"

int	main()
{
  t_allum allum;

  board_initialiser(&allum);
  board_printer(&allum);
  while (1)
    {
      my_putstr("\nYour turn:\n");
      while (player_turn(&allum) != 0);
      board_printer(&allum);
      if (check_end_of_game(&allum) == 1)
	{
	  my_putstr("You lost, too bad..\n");
	  return (0);
	}
      ia(&allum);
      board_printer(&allum);
      if (check_end_of_game(&allum) == 1)
	{
	  my_putstr("I lost.. snif.. but I'll get you next time!!\n");
	  return (0);
	}
    }
  return (0);
}
