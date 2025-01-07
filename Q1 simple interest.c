/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int P;
    float R,n,SI;
    printf("enter the principal amount:");
    scanf("%d",&P);
    printf("enter the interest rate:");
    scanf("%f",&R);
    printf("enter the number of years:");
    scanf("%f",&n);
    
    SI=(P*R*n)/100;
    
   printf("simple interest : %f", SI);
    
    

    return 0;
}
