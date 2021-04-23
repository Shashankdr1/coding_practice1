/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r,s,n;
    printf("enter the integer\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        printf("%d\n",r);
        n=n/10;
        
    }
    return 0;
}

