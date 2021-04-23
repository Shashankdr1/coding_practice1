/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<math.h>
int isprime(int i)
{
	int j;
	for(j=2;j<i/2;j++)
        {
               if(i%j==0)
               	return 0;
               return 1;
         }
}                	
void main()
{
	int i,n,flag;
	printf("enter the integer\n");
	scanf("%d",&n);
	printf("the prime factors of integer %d are:\n",n);
	for(i=2; i<n; i++)
    	{
    		flag=isprime(i);
        	if(n%i==0 && flag==1)
        	{
             		printf("%d\t",i);
             	}
        }
}            
 		
            	   
