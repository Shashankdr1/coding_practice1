/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,temp,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(n>0)
        {
            j=n%10;
            sum=sum+(j*j);
            n=n/10;
        }
        n=sum;
    }
    if(sum==1)
    {
        printf("it is a happy number");
    }
    else
    {
        printf("it is a unhappy number");
    }
}
 		
            	   
