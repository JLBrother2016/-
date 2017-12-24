// ManualNameMangling.cpp
// g++ ManualNameMangling.cpp -o ManualNameMangling
#include <stdio.h>
namespace myname {
  int var = 42;
}

// extern "C" double _ZN6myname3varE;      //会造成不匹配问题

int main(int argc, char const *argv[])
{
  printf("%d\n", _ZN6myname3varE);

  return 0;
}

