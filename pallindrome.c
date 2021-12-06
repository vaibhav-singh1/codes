
#include <stdio.h>

int main()
{
    int a,n,rev=0,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
        
    
    
    while(n>0){
        a=n%10;
        
        rev=rev*10+a;
         n=n/10;
     
        
    }
    if(rev==temp)
        printf("pallin");
        else
            printf("not");
        
    }

