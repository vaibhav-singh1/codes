#include<stdio.h>

int main()
{
   int a,i;
   printf("enter the number\n");
   scanf("%d",&a);
   for(i=1;i<=a/2;i++){
       if(a%i==0)
       printf("%d\n",i);
   }
   return 0;
}
