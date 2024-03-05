#include <stdio.h>

int main () 
{
    int c, counter;
    counter = 0; 
    while ((c=getchar()) != EOF) {
        if(c=='\t') ++counter;
        //putchar(c);
    }
    printf("%d\n", counter);
}
