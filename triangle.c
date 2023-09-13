#include <stdio.h>

int main(int argc, char **argv) {
    for (int i=0; i<argc; i++) {
        for (int j = i; j<argc; j++) {
            printf("%s ", argv[j]);
        }
        printf("\n");
    }
    return 0;
}