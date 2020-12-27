#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        return 1;
    }

    for (int i = 0; (i < argv[1][i]) != '\0'; i++) {
        char letter = argv[1][i];

        switch (letter) {
            case 'a':
            case 'A':
                printf("Position %1$d, Code %2$d: '%2$c'\n", i, letter);
                break;

            case 'e':
            case 'E':
                printf("Position %1$d, Code %2$d: '%2$c'\n", i, letter);
                break;

            case 'i':
            case 'I':
                printf("Position %1$d, Code %2$d: '%2$c'\n", i, letter);
                break;

            case 'o':
            case 'O':
                printf("Position %1$d, Code %2$d: '%2$c'\n", i, letter);
                break;


            case 'u':
            case 'U':
                printf("Position %1$d, Code %2$d: '%2$c'\n", i, letter);
                break;

            case 'y':
            case 'Y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("Position %1$d, Code %2$d: '%2$c'\n", i, letter);
                }
                break;

            default:
                printf("Position %1$d, Code %2$d: '%2$c' is not a vowel\n",
                        i,
                        letter);
        }
    }

    return 0;
}
