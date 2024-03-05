#include <stdio.h>

int main () {
    int c;
    int arr[128] = {0};

    while ((c = getchar()) != EOF) {
        //putchar(c);
        ++arr[c-1];
    }

    for (int i = 0; i < 128; i++) {

        if(arr[i] != 0) {
            putchar((int)(i+1));
            putchar(' ');
            putchar('|');
            putchar('\t');

            for(int s = 0; s < arr[i]; s++) {
                putchar('X');
            }
            putchar('\n');

        }
    }
    return 0;
}

