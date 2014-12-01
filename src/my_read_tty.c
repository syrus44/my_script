/*
** my_read_tty.c for my_read_tty in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 25 17:30:01 2013 jordan bettin
** Last update Thu Feb 28 14:52:06 2013 jordan bettin
*/

#include "my_script.h"

int	my_read_tty(int *fd_amaster, int *fd_file, pid_t pid)
{
  int	rd;
  int	stat;
  int	i;
  char	*buff;
  fd_set fds;
  struct termios t;

  rd = 0;
  buff = xmalloc(sizeof(char) * 8192);
  my_get_termattr(&t);
  while (waitpid(pid, &i, WNOHANG) != pid)
    {
      FD_ZERO(&fds);
      FD_SET(0, &fds);
      FD_SET(*fd_amaster, &fds);
      xselect(*fd_amaster + 1, &fds, NULL, NULL, NULL);
      stat = manage_fd(fd_amaster, buff, &rd, &fds);
      if (stat == 1)
	xwrite(*fd_file, buff, rd);
    }
  free(buff);
  return (0);
}
