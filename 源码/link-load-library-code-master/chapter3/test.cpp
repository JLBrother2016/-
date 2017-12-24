#include <iostream>
__attribute__ ((weakref)) void foo();

int main(int argc, char const *argv[])
{
  if(foo) foo();

  return 0;
}
