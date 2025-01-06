/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,a,b;
    printf("enter first number : \n");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    for(i=0;i<=b;i++)
    {
        if(i>=a && i<=b){
             printf("%d\n",i);
        }
        
    }
   

    return 0;
}
