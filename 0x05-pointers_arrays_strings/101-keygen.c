#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int pass[100];
    int i, sum, n;

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        pass[i] = rand() % 78;
        sum += pass[i];
        putchar(pass[i] + '0');
    }

    n = 2772 - sum;

    putchar(n + '0');

    return 0;
}

