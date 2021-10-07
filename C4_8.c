#include <stdio.h>

int main()
{
    int i=0, num,factorial=1;
    printf("Enter number to find factorial:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n",num,factorial);
    return 0;
}