#include "header.h"

#define LINE_LENGHT 20
#define HALF_LENGHT 10
#define LETTER_SPACE  30

char letter_o[8] = {
  LINE_LENGHT, 0,
  0, LINE_LENGHT,
  -LINE_LENGHT, 0,
  0, -LINE_LENGHT,
};
char letter_p[8] = {
  LINE_LENGHT, 0,
  0, LINE_LENGHT,
  -HALF_LENGHT,0,
  0,-LINE_LENGHT,
};

char letter_x1[2] = {
  -LINE_LENGHT, LINE_LENGHT,
};
char letter_x2[2] = {
  LINE_LENGHT, LINE_LENGHT,
};
int main()
{
  unsigned char r;
  char x = LETTER_SPACE;
  char y = -LETTER_SPACE;
  char dx = -1;
  char dy = 1;
  while(1)
  {
    wait_retrace();

    move(x, y);
    lines(4, letter_o);
    move(0, LETTER_SPACE);
    lines(4, letter_p);
    move(HALF_LENGHT, LETTER_SPACE);
    lines(1, letter_x1);
    move(0, -LINE_LENGHT);
    lines(1, letter_x2);
    if (x == -(LETTER_SPACE * 2)){
        dx = 1;
    }
    if (x == (LETTER_SPACE * 2)){
        dx = -1;
    }
    x += dx;

  }
  return 0;
}
