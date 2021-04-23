/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i=0,j=0;
    int a[50];
    printf("enter an integer\n");
    scanf("%d",&n);
    while(n>0)
    {
        a[i++]=n%10;
        n=n/10;
    }    
    printf("odd digits are\n");
    for(j=i-1;j>=0;j--)
    {
        if(a[j]%2==1)
            printf("%d\n",a[j]);
    }
    printf("even digits are\n");
    for(j=i-1;j>=0;j--)
    {
        if(a[j]%2==0)
            printf("%d\n",a[j]);
        
    }
    
}


