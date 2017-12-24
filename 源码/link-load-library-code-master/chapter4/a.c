// #include "b.c"
#include <stdio.h>
extern int shared;
void swap(int* a, int* b);

int main()
{
    int a = 0;
    swap(&a, &shared);

    return 0;
}
