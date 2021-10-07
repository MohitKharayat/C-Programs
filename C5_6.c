#include <stdio.h>
float sum(int n);
int main()
{
    int num;
    printf("Enter Total terms:\n");
    scanf("%d", &num);
    printf("Sum is:\n%f",sum(num));
    return 0;
}
float sum(int n)
{
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
    return n;
}