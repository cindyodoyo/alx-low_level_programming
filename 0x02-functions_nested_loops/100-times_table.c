#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number to determine the size of the times table
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
    {
        return; // Exit the function if n is out of range
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int result = i * j;

            if (j != 0)
            {
                printf(", ");
            }

            if (result < 10)
            {
                printf("  %d", result);
            }
            else if (result < 100)
            {
                printf(" %d", result);
            }
            else
            {
                printf("%d", result);
            }
        }
        printf("\n");
    }
}
