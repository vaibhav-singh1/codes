
#include <stdio.h>

int main()
{
    int n ,i;
    printf("give the nbr\n");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++){
        if (n%i==0)
        
           printf("not prime");
               
           
            else
            printf(" prime");
            break;
        
    }

    return 0;
}
