#include <stdio.h>

int main () {
    int c;

    while ((c=getchar()) != EOF) {
        switch (c) {
            case '\t':
                putchar('\\');
                putchar('n');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
                break;
        }

    }
    return 0;
}


