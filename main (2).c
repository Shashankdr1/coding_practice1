/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
 int main()
{
    int i,n,flag=0;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i*(i+1)==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("pronic number");
    }
    else
    {
        printf("not a pronic number");
    }
}

 		
            	   
