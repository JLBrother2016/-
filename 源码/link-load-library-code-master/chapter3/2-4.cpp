#include <Windows.h>
#include <Dbghelp.h>

int main(int argc, char const *argv[])
{
  char buffer[256];
  if(argc == 2){
    UnDecorateSymbolName(argv[1], buffer, 256, 0);
    printf(buffer);
  } else {
    printf("Usage: 2-4.exe UnDecorateSymbolName\n");
  }

  return 0;
}
