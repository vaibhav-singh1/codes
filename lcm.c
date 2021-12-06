
#include <stdio.h>

int main()
{
    int a,b,n,i;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
   int max=a>b?a:b;
   for(i=max; ;i++){
       if(i%a==0 && i%b==0 )
       {
       n=i;
       break;
       }
       
   }
    printf("%d",n);}
    