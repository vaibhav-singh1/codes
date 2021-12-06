
#include <stdio.h>

int main()
{
    int n,i,j;
    printf("enter nbr of line");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
           if((i+j)%2==0) printf("1");
           else printf("0");
                   }printf("\n");
    }
       // printf("\n");

    return 0;
}
