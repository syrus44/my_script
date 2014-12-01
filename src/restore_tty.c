/*
** restore_tty.c for restore_tty in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 10:02:49 2013 jordan bettin
** Last update Mon Feb 25 15:45:45 2013 jordan bettin
*/

#include "my_script.h"

void	restore_tty()
{
  struct termios	t;

  xtcgetattr(0, &t);
  t.c_iflag |= ICANON;
  t.c_lflag |= ECHO;
  t.c_lflag |= ISIG;
  xtcsetattr(0, TCSANOW, &t);
}
