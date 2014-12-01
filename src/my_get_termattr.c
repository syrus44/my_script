/*
** my_get_termattr.c for my_get_termattr in /home/bettin_j//Documents/MyScript
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Feb 19 17:25:44 2013 jordan bettin
** Last update Sat Feb 23 16:01:52 2013 jordan bettin
*/

#include "my_script.h"

void	my_get_termattr(struct termios *t)
{
  xtcgetattr(0, t);
  t->c_lflag &= ~ICANON;
  t->c_lflag &= ~ECHO;
  t->c_lflag &= ~ISIG;
  xtcsetattr(0, TCSANOW, t);
}
