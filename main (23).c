/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val,max=0,min=9999;
   char str[20];
   
   while(1)
   {
       
        printf("enter\n");
        scanf("%s",str);
   
        val = atoi(str);
        int k=strcmp(str,"done");
        if(k==0)
        {   printf("%d\n",max);
            printf("%d\n",min);
            exit(0);
        }
        if(val==0)
            continue;
        else 
        {
            if(val>max)
                max=val;
            if(val<min)
              min=val;
            continue;
        }
            
   }
   

}
