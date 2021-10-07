#include<stdio.h>
float farenhiet(float celsius);
int main(){
    int temperature;
    printf("Enter Temperature in Celsius:\n");
    scanf("%d",&temperature);
    printf("Temperature in Farenhiet is: %f\n",farenhiet(temperature));
    return 0;
}
float farenhiet(float celsius)
{
    float result;
    result=((celsius * 9)/5) + 32 ;
    return result;
}