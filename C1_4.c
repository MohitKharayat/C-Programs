#include<stdio.h>

int main(){
    int p=0,r=0,t=0;
    float si;
    printf("Enter Principal amount,annual interest,time in yeras:\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple interst is :%f",si = (p*r*t)/100);
    return 0;
}