/*
** my_script.c for my_script in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Feb 26 11:35:32 2013 jordan bettin
** Last update Tue Feb 26 11:50:48 2013 jordan bettin
*/

#include "my_script.h"

int	my_script(char *filename)
{
  int	fd_file;
  char	buff[512];
  time_t	date;

  fd_file = xopen(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
  printf("Script started, file is %s\n", filename);
  time(&date);
  strcpy(buff, "Script started on ");
  strcat(buff, ctime(&date));
  xwrite(fd_file, buff, strlen(buff));
  init_components(fd_file);
  printf("Script done, file is %s\n", filename);
  strcpy(buff, "Script done on ");
  strcat(buff, ctime(&date));
  xwrite(fd_file, buff, strlen(buff));
  xclose(fd_file);
  return (EXIT_SUCCESS);
}
