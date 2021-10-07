#include<stdio.h>

int main()
{
    char i;
    printf("Enter the character:\n");
    scanf("%c", &i);
    if(i<=122 && i>=97)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }
    return 0;
}