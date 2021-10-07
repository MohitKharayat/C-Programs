#include <stdio.h>
int main(){
   int i, num,sum=0;
   printf("Enter number to print table: ");
   scanf("%d", &num);
   for(i=1; i<=10; i++){
      printf("%d * %d = %d\n", num, i, (num*i));
      sum += num*i;
   }
   printf("The sum of elements is:%d\n",sum);
   return 0;
}