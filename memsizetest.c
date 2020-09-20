#include "types.h"
#include "user.h"
#include "syscall.h"

int
main(int argc, char *argv[])
{
  printf(1, "The process is using: %dB\n", memsize());

  void *m1;

  printf(1, "Allocating more memory\n");
  m1 = (char *)malloc(4096);

  printf(1, "The process is using: %dB\n", memsize());

  printf(1, "Freeing memory\n");
  free(m1);

  printf(1, "The process is using: %dB\n", memsize());

  exit();
  return 0;
}
