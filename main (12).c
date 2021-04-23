/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int a[50];
    int i=0;
    int j,r,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a[i]=r;
        i++;
        n=n/10;
    }
    for(j=i-1;j>-1;j--)
    {
        printf("%d",a[j]);
    }    
}

