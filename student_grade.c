/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mark;
    printf("enter the marks:");
    scanf("%d",&mark);
    if(mark>=90 && mark<=100)
    {
        printf("grade is A");
        
    }
    else if(mark >= 80 && mark<=90)
    {
        printf("grade is B");
    }
    else if(mark>=70 && mark<=80){
        printf("grade is C");
    }
    else if(mark>=60 && mark<=70){
        printf("grade is D");
    }
    else if(mark>=50 && mark<=60){
        printf("grade is E");
    }
    else if(mark<50){
        printf("failed");
    }
    else{
        printf("invalid number");
    }


    return 0;
}
