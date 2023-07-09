#include <cs50.h>
#include <stdio.h>

int get_start();
int get_end(int start);

int main(void)
{
    // TODO: Prompt for start size
    int start = get_start();

    // TODO: Prompt for end size
    int end = get_end(start);

    // TODO: Calculate number of years until we reach threshold

    int years = 0; // counter to keep track of years

    // Loop to calculate the number of years for the population to reach the end
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }


    // TODO: Print number of years
    printf("Years: %d\n", years);
    return 0;

}

// Function to take input for start size
int get_start()
{
    int start_pop;
    do
    {
        start_pop = get_int("Start Size: ");

    }
    while (start_pop < 9);

    return start_pop;
}

// Function to take input for end size
int get_end(int start)
{
    int end_pop;
    do
    {
        end_pop = get_int("End Size: ");

    }
    while (end_pop < start);

    return end_pop;
}
