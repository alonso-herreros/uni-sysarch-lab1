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
    char *HEXADECIMAL_DESC = "The hexadecimal number is 0X";
    char *FLOAT_NUM_DESC = "The real number is";
    char *STRING_DESC = "The string is";

    printf("%-26s%c\n", LETTER_DESC, letter);
    printf("%-26s%d\n", NUM_DESC, num);
    printf("%-26s%X\n", HEXADECIMAL_DESC, hexadecimal);
    printf("%-26s%.2e\n", FLOAT_NUM_DESC, float_num);
    printf("%-26s%s\n", STRING_DESC, string);

}
