#include <stdio.h>


float convFtoC(float f) {
    float res;
    res = (5.0/9.0) * (f - 32.0);
    return res;
}

int main()
{

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    for (float i = lower; i <= upper; i = i+step)
    {
        printf("%.0f\t%.1f\n", i, convFtoC(i));
    }
    
}
