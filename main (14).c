/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    char splitStrings[10][10]; 
    int i,j,cnt;
 
    printf("Enter a string: ");
    gets(str);
 
    j=0; cnt=0;
    for(i=0;i<=(strlen(str));i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            splitStrings[cnt][j]='\0';
            cnt++;
            j=0;    
        }
        else
        {
            splitStrings[cnt][j]=str[i];
            j++;
        }
    }
    printf("\nOriginal String is: %s",str);
    printf("\nStrings (words) after split by space:\n");
    for(i=0;i < cnt;i++)
        printf("%s\n",splitStrings[i]);
    return 0;
}    
