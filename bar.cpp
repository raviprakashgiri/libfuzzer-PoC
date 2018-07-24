#include "foo.h"

int main()
{
   foo f;
   char test[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbcccccccc";
   int ret = f.echo(test);
   return 0;
}
