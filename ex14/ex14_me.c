#include <stdio.h>
#include <string.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[], int len);

void print_arguments(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++) {
        print_letters(argv[i], strlen(argv[i]));
    }
}

void print_letters(char arg[], int len)
{
    for (int i = 0; i < len; i++) {
        char ch = arg[i];

        if (can_print_it(ch)) {
                printf("'%c' == '%d'", ch, ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
