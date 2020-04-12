#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "Number of read() system calls is: %d\n", getreadcount());
  exit();
}

