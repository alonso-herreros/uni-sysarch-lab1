#include <stdio.h>

int main(int argc, char **argv)
{
    char letter = 'm';
    int num = 60345698;
    int hexadecimal = 0x3FA;
    float float_num = 3.1e33;
    char *string = "ABCDEFGHIJKL";

    char *LETTER_DESC = "The letter is";
    char *NUM_DESC = "The number is";
    char *HEXADECIMAL_DESC = "The hexadecimal number is";
    char *FLOAT_NUM_DESC = "The real number is";
    char *STRING_DESC = "The string is";

    printf("%-25s %c\n", LETTER_DESC, letter);
    printf("%-25s %d\n", NUM_DESC, num);
    printf("%-25s %x\n", HEXADECIMAL_DESC, hexadecimal);
    printf("%-25s %e\n", FLOAT_NUM_DESC, float_num);
    printf("%-25s %s\n", STRING_DESC, string);

}
