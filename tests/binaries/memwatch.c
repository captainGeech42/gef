#include<stdio.h>
#include<stdlib.h>

int myglobal = 1;

int main(int argc, char** argv)
{
    // breakpoints hardcoded for convenience
    myglobal = strtoll(argv[1], NULL, 16);
    asm("int3");
    return 0;
}
