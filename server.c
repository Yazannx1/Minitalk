#include "minitalk.h"

void handler(int signal)
{
    // reconstuct
    static int i;
    static char c;

    if(signal == SIGUSR1)
      c = c << 1 | 1;
    else if(signal == SIGUSR2) {
      c = c << 1 | 0;
    }
    i++;
    if(i == 8)
    {
      printf("%c", c); // A CHARACTAR!!!!! :)
      i = 0;
      c = 0;
    }
}

// make it a char
// &
// |
// constuct


int main(int ac, char **av)
{
  int pid = getpid();

  printf("%d\n\n", pid);


  signal(SIGUSR1, handler);
  signal(SIGUSR2, handler);

  while(1)
  {
    pause();
  }
}