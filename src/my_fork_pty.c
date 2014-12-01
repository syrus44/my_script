/*
** my_fork_pty.c for my_fork_pty in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 09:43:20 2013 jordan bettin
** Last update Wed Feb 27 20:20:03 2013 jordan bettin
*/

#include "my_script.h"

pid_t	my_fork_pty(int *fd_amaster, int *fd_aslave, char *tty_name)
{
  pid_t	pid;

  my_open_pty(fd_amaster, fd_aslave, tty_name);
  if ((pid = fork()) < 0)
    {
      errno = EAGAIN;
      my_exit_perror("fork");
    }
  else if (pid == 0)
    {
      my_login_tty(fd_aslave);
      return (0);
    }
  else
    {
      xclose(*fd_aslave);
      return (pid);
    }
  return (-1);
}
