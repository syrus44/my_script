/*
** xselect.c for xselect in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 11:40:56 2013 jordan bettin
** Last update Mon Feb 25 14:08:29 2013 jordan bettin
*/

#include "my_script.h"

int	xselect(int nfds, fd_set *readfds, fd_set *writefds,
		fd_set *exceptfds, struct timeval *timeout)
{
  int	stat;

  stat = select(nfds, readfds, writefds, exceptfds, timeout);
  if (stat < 0)
    {
      errno = EBADF;
      my_exit_perror("select");
    }
  return (nfds);
}
