#include "types.h"
#include "stat.h"
#include "user.h"

// user program to test the settickets system call
// takes 1 argument - the number of tickets to set
// for the proccess
int
main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf(1, "Must provide number of tickets.\n");
    exit();
  }

  int num = atoi(argv[1]);
  if (settickets(num) < 0){
    printf(1, "Error setting tickets!\n");
  }
  else{
    printf(1, "Tickets updated! Number of tickets for this process is: %d\n", num);
  }

  exit();
}
