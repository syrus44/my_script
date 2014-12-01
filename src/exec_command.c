/*
** exec_command.c for exec_command in /home/bettin_j//Documents/MyScript
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Feb 26 12:32:34 2013 jordan bettin
** Last update Thu Feb 28 15:53:49 2013 jordan bettin
*/

#include "my_script.h"

int	exec_command(char *command)
{
  int	fd_file;
  char	buff[512];
  time_t date;

  fd_file = xopen("typescript", O_WRONLY | O_CREAT | O_TRUNC, 0666);
  printf("Script started, file is typescript\n");
  time(&date);
  strcpy(buff, "Script started on ");
  strcat(buff, ctime(&date));
  xwrite(fd_file, buff, strlen(buff));
  init_components2(fd_file, command);
  printf("Script done, file is typescript\n");
  strcpy(buff, "Script done on ");
  strcat(buff, ctime(&date));
  xwrite(fd_file, buff, strlen(buff));
  xclose(fd_file);
  return (EXIT_SUCCESS);
}
