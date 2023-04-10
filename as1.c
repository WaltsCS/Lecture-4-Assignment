#include <stdio.h>
int main(void)
{
    int i;

    i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}

/* This output results in a geometric sequence 
that initiated a value starting from one up until 
the value is less than or equal to 128. */