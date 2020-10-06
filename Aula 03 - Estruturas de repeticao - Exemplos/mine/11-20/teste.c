#include <stdio.h>
#include <stdlib.h>
/*
  include <windows.h> if you're in Windows
  else include <unistd.h> on UNIX-based system
*/
#include <windows.h>

int main() {
  int i;
  for (i = 1; i <= 100; i++) {
    printf("downloading song..... %d %%", i);

    Sleep(1000);
    // where 1000 refers to number of milliseconds
    // use sleep(x) in UNIX, where x is no. of seconds

    system("cls");
    // Clear the screen so that next time, you're in the same line
  }
  getch();
  return 0;
}