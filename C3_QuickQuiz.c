#include<stdio.h>

int main()
{
    int n;
    printf("Enter marks:\n");
    scanf("%d",&n);
    if (n>=90)
    printf("A Grade");
    else if (90>=n && n>=80)
    printf("B Grade");
    else if (80>=n && n>=70)
    printf("C Grade");
    else if (70>=n && n>=60)
    printf("D Grade");
    else  
    printf("F Grade");
    return 0;
}