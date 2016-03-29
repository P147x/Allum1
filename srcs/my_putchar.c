/*
** my_putchar.c for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/srcs
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 15:27:44 2016 Lucas
** Last update Sat Feb 13 17:53:04 2016 Lucas
*/

#include "allum1.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
