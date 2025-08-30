#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h> 

struct termios origTermios;

void disableRawMode() {
  tcsetattr(STDIN_FILENO, TCSAFLUSH, &origTermios);
}

void enableRawMode() {
  tcgetattr(STDIN_FILENO, &origTermios);
  atexit(disableRawMode);

  struct termios raw = origTermios;
  raw.c_iflag &= ~(ICRNL | IXON);
  raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);

  tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

int main() {
  enableRawMode();

  char c;
  while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q') {
    if (iscntrl(c)) {
      printf("%d\n", c);
    } else {
      printf("%d ('%c')\n", c, c);
    }
  }
  return 0;
}
