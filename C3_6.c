#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
     if(a>b) 
    { 
        if(a>c) 
        { 
            if(a>d) 
            {   
                printf("%d is largest",a); 
            } 
            else 
            { 
                printf("%d is largest",d); 
            } 
        } 
    } 
    else if(b>c) 
        { 
            if(b>d) 
                { 
                    printf("%d is largest",b); 
                } 
            else 
                { 
                    printf("%d is largest",d); 
                } 
        } 
        else if(c>d) 
            { 
               printf("%d is largest",c); 
            } 
        else 
        { 
            printf("%d is largest",d); 
        } 
    return 0;  
}
    
