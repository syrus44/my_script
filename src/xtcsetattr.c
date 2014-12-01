/*
** xtcsetattr.c for xtcsetattr in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Feb 15 17:38:10 2013 jordan bettin
** Last update Sat Feb 23 15:28:01 2013 jordan bettin
*/

#include "my_script.h"

int	xtcsetattr(int fd, int optional_actions,
		   const struct termios *termios_p)
{
  if (tcsetattr(fd, optional_actions, termios_p) == -1)
    {
      fprintf(stderr, "Fail to set terminal attributes !\n");
      exit(EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
