#include<stdio.h>

int main(){
    int r,h;
    float pi=3.14;
    printf("Enter the radius:\n");
    scanf("%d",&r);
    printf("Enter the height:\n");
    scanf("%d",&h);
    printf("Volume of cylinder is:%f",pi*r*r*h);
    return 0;
}