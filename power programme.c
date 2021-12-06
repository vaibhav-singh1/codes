/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c=1,i;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter the power\n");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        c=c*a;
    }
    printf("%d",c);
    return 0;
}
