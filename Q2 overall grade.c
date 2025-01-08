/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float WT;
    float L,A,OG;
    printf("Enter the marks scored by the students:\n");
    
    printf("score of Written test:");
    scanf("%f",&WT);
    printf("score of lab exam:");
    scanf("%f",&L);
    printf("score of assignments:");
    scanf("%f",&A);
    
    OG=(WT*70)/100+(L*20)/100+(A*10)/100;
    
   printf("grade of the student is : %f", OG);

    return 0;
}