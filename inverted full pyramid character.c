/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n=5;
    for (int i=0; i<n; i++) {
        
        for (int j=0; j<2*i; j++) {
            printf(" ");
        }
        
        for (int k=0; k<2*(n-i)-1; k++) {
            printf("%c ",'A'+k);
        }
        printf("\n");
    }

    return 0;
}
