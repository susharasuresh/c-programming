/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float A,IR;
    printf("enter the annual income:");
    scanf("%f",&A);
    if(A<=250000){
        printf(" no tax");
    }
    else if(A>=250000 && A<=500000){
        IR = (A*5)/100;
        printf("tax percentage is : %f",IR);
    }
    
    else if(A>=500000 && A<=100000){
        IR=(A*20)/100;
        printf("tax percentage is : %f",IR);
    }
    else if(A>=1000000 && A<=5000000){
        IR=(A*30)/100;
        printf("tax percentage is :%f",IR);
    }
    else{
        printf("invalid number");
    }
    
    

    return 0;
}
