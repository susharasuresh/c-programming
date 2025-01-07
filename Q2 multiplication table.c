/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int i,a,b,output;
    printf("enter a number to muliply:\n");
    scanf("%d",&a);
    printf("how many times to multiply:");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        output=i*a;
         printf("%d * %d = %d \n",i , a, output);
    }
   
    return 0;
}
