#include<stdio.h>
float force (float celsius);
int main(){
    int m;
    printf("Enter mass:\n");
    scanf("%d",&m);
    printf("Force in Farenhiet is: %f\n",force(m));
    return 0;
}
float force (float mass ) 
{
    float result;
    result= mass * 9.8;
    return result;
}