#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Hello\n");
    printf("Program name = %s\n", argv[0]);
    for (int i=1; i<argc; i++)
    {
        printf("ARG[%d] = %s\n", i, argv[i]);
    }
    return 0;
}