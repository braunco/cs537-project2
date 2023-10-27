#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  char buffer[512];
  getlastcat(buffer);
  printf(1, "XV6_TEST_OUTPUT Last catted filename: %s\n", buffer);
  exit();
}
