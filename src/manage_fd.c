/*
** manage_fd.c for manage_fd in /home/bettin_j//Documents/MyScript
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Feb 28 14:36:46 2013 jordan bettin
** Last update Thu Feb 28 15:18:44 2013 jordan bettin
*/

#include "my_script.h"

int	manage_fd(int *fd_amaster, char *buff, int *rd,
		  fd_set *fds)
{
  if (FD_ISSET(0, fds))
    {
      if ((*rd = read(0, buff, sizeof(buff))) == -1)
	return (-1);
      else if (*rd == 0)
	return (-1);
      else
	xwrite(*fd_amaster, buff, *rd);
      return (0);
    }
  if (FD_ISSET(*fd_amaster, fds))
    {
      if ((*rd = read(*fd_amaster, buff, sizeof(buff))) == -1)
	return (-1);
      else if (*rd == 0)
	return (-1);
      else
	xwrite(1, buff, *rd);
      return (1);
    }
  return (0);
}
