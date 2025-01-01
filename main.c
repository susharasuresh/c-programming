/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sumofnum(){
   static int a=0; // static variable
   a++;
    printf("the counted value is: %d \n",a);
   

}

int main()
{
    
    sumofnum();
    sumofnum();
    sumofnum();
  
    return 0;

}

