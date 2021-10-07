#include <stdio.h>

int main()
{
    int i=1, num,factorial=1;
    printf("Enter number to find factorial:");
    scanf("%d", &num);
    while (i <= num)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is %d\n",num,factorial);
    return 0;
}