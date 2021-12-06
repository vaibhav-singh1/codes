
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter the nbr\n");
    scanf("%d",&n);
    printf("%d%d",a,b);
    while(n-2>0){
       c=a+b;
       printf("%d",c);
       a=b;
       b=c;
       n--;
    }
    
}
