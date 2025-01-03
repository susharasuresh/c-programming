/******************************************************************************
Write a program to check whether a student has passed or failed in a subject after he or she enters their 
mark(pass mark for a subject is 50 out of 100). program should accept input from the user and output a message as "passed" or "failed".


*******************************************************************************/
#include <stdio.h>

int main()
{
   float a;
   printf("enter the mark:");
   scanf("%f",&a);
   if(a<50){
       printf("result is failed %f",a);
   }else{
       printf("result is passed");
   }

    return 0;
}