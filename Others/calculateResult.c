#include <stdio.h>

unsigned long calculateResult (int n)
{
    if(n<0)
        return -1;
    else if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (calculateResult(n-1)+calculateResult(n-2));
}

int main()
{
    printf("Start.....\n");
    printf("Result when n = 10: %d\n", calculateResult(10));
    printf("Result when n = 20: %d\n", calculateResult(20));
    printf("Result when n = 30: %d\n", calculateResult(30));
    printf("Result when n = 40: %d\n", calculateResult(40));
    printf("Result when n = 50: %d\n", calculateResult(50));

    return 0;
}