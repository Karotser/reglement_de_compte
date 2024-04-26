#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void capout(int a)
{
  write(1,"SWAG...NO!!\n", 12);
}
int main(void)
{
  signal(SIGINT,capout);
  while (1)
    {
      //      fork();
    }
}
