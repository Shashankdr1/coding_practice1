/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void con_cat(char a[],char b[])
{
    int i=0,j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i+j]=b[j];
        j++;
        a[i+j]='\0';
    }
    puts(a);
    getch();
}
void main()
{
    char a[30];
    char b[20];
    printf("Enter the first string\n");
    scanf("%s",a);
    printf("Enter the second string\n");
    scanf("%s",b);
    con_cat(a,b);
}
