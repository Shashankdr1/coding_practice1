/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
        	printf("%d\n",i);
        }
    }
}
