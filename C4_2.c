#include <stdio.h>
int main(){
   int i, num;
   printf("Enter number to print table: ");
   scanf("%d", &num);
   for(i=10;i; i--){
      printf("%d * %d = %d\n", num, i, (num*i));
   }
   return 0;
}