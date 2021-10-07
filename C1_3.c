#include<stdio.h>

int main(){
    float cel,far;
    printf("Enter temperature in celsius:\n");
    scanf("%f",&cel);
    printf("Temperature in farenhiet is:%f",far=(cel*9/5)+32);
    return 0;
}