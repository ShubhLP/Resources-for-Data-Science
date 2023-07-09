#include <cs50.h>
#include <stdio.h>

int get_size();
void print_grid(int size);

int main(void)
{
    int size = get_size();

    print_grid(size);

    return 0;
}

int get_size()
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n >= 9);

    return n;
}

void print_grid(int size)
{
    // Loop for passes (iterations)
    for (int i = 0; i < size; i++)
    {
        // Loop to print spaces in left pyramid
        for (int k = 0; k < size - 1 - i; k++)
        {
            printf(" ");
        }

        // Loop to print #
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  "); // to print 2 spaces between the left and the right pyramid

        // Loop for right pyramid
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n"); // control/cursor moves to new line
    }
}
