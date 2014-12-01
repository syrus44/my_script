/*
** init_components.c for init_components in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 09:39:05 2013 jordan bettin
** Last update Thu Feb 28 15:54:43 2013 jordan bettin
*/

#include "my_script.h"

int		init_components2(int fd_file, char *command)
{
  int		fd_amaster;
  int		fd_aslave;
  char		*tty_name;
  pid_t		pid;

  fd_amaster = 0;
  fd_aslave = 0;
  tty_name = xmalloc(sizeof(char *) * 256);
  if ((pid = my_fork_pty(&fd_amaster, &fd_aslave, tty_name)) == -1)
    {
      errno = ENOENT;
      my_exit_perror("my_fork_pty");
    }
  if (pid == 0)
    {
      if ((execlp("/bin/tcsh", "tcsh", NULL)) == -1)
      	{
      	  fprintf(stderr, "Fail to execute tsch command\n");
      	  exit(EXIT_FAILURE);
      	}
      system(command);
    }
  my_read_tty(&fd_amaster, &fd_file, pid);
  return (0);
}
