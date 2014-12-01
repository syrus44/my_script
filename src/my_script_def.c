/*
** my_script_def.c for my_script_def in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Sat Feb 16 15:21:44 2013 jordan bettin
** Last update Tue Feb 26 11:36:40 2013 jordan bettin
*/

#include "my_script.h"

int	my_script_def()
{
  int	fd_file;
  char	buff[512];
  time_t	date;

  fd_file = xopen("typescript", O_WRONLY | O_CREAT | O_TRUNC, 0644);
  printf("Script started, file is typescript\n");
  time(&date);
  strcpy(buff, "Script started on ");
  strcat(buff, ctime(&date));
  xwrite(fd_file, buff, strlen(buff));
  init_components(fd_file);
  printf("Script done, file is typescript\n");
  strcpy(buff, "Script done on ");
  strcat(buff, ctime(&date));
  xwrite(fd_file, buff, strlen(buff));
  xclose(fd_file);
  return (EXIT_SUCCESS);
}
