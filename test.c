/**
 * Test the syscall
 */
#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <errno.h>

#define SYS_Abdullah_Yilmaz 335 

int main(int argc, char **argv)
{
  if (argc <= 1) {
    printf("Must provide a string to give to system call.\n");
    return -1;
  }
  char *arg = argv[1];
  printf("Making system call with \"%.50s\".\n", arg);
  long res = syscall(335, arg);

  if ( res == -1)
    fprintf(stderr, "Abdullah Yilmaz failed, errno = %d\n", errno);
  else
    printf("System call Abdullah Yilmaz returned %ld.\n", res);
  return res;
}
