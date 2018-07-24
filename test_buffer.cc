#include <stdint.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <string.h>
#include "foo.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  if (size > 0)
  {
    foo my_foo;
    int retu = my_foo.echo((const char *)data);
    printf("Done\n");
  }
  return 0;
}
