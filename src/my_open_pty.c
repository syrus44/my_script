/*
** my_open_pty.c for my_open_pty in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 09:56:25 2013 jordan bettin
** Last update Wed Feb 27 15:10:20 2013 jordan bettin
*/

#include "my_script.h"

int	my_open_pty(int *fd_amaster, int *fd_aslave, char *name)
{
  *fd_amaster = xopen("/dev/ptmx", O_RDWR | O_NOCTTY, 0666);
  my_unlockpt(*fd_amaster);
  name = my_ptsname(*fd_amaster);
  my_grantpt(name);
  if (name == NULL)
    {
      fprintf(stderr, "Name invalid !\n");
      exit(EXIT_FAILURE);
    }
  *fd_aslave = xopen(name, O_RDWR, 0666);
  return (0);
}
