/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
       int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i*i;j++){
            
            printf("* ");
            if(j%(2*i)==0){
                printf("\n");
            }
        }
        for(int k=1;k<=n;k++){
            if(i==n){
                break;
            }
            
           printf("*\n");
           
        }
        
    }

    return 0;
}