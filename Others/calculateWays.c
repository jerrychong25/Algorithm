#include <stdio.h>

unsigned long calculateWays(int n)
{
    unsigned long ways = 0;
    int remaining = 0;

    unsigned char dice[6] = {1, 2, 3, 4, 5, 6};

    for(int i = 0;i < 6;i++)
    {
        remaining = n - dice[i];
        // printf("n: %d\n", n);
        // printf("dice[i]: %d\n", dice[i]);
        // printf("remaining: %d\n", remaining);
        ways++;
        if(remaining > 0)
        {
            ways += calculateWays(remaining);
        }
    }

    // printf("ways: %d\n", ways);

    return ways;
}

int main (void)
{
    printf("Start.....\n");

    unsigned long totalWays;

    totalWays = calculateWays(610);

    printf("totalWays when n = 610: %d\n", totalWays);
}