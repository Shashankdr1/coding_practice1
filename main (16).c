/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
void strlength(char s[])
{
    int i;
    int count=0;
    while(s[i]!='\0')
    {
        i++;
    }
    count=i;
    printf("length of a strig is %d\n",count);
}
int main()
{
    char s[20];
    printf("enter the string");
    scanf("%s",s);
    strlength(s);
}        

