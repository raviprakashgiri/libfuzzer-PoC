#include "foo.h"
#include <stdio.h>
#include <string.h>

int foo::echo(const char *str)
{
  char buffer[20];

  printf("Enter some text to echo it back:\n");
  //scanf("%s", buffer);
  strcpy(buffer, str);
  printf("You have entered: %s\n", buffer);
  return 0;
}

