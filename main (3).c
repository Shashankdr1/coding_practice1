/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,number,rem,place=1;
   long int bin=0;
   printf("enter the decimal number");
   scanf("%d",&number);
   n=number;
   while(n>0)
   {
       rem=n%2;
       bin=bin+rem*place;
       place=place*10;
       n=n/2;
   }
   printf("equivalent binary number is %ld",bin);
}
