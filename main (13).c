/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    char *name;
    name=(char*)malloc(sizeof (char));
    printf("enter the name\n");
    scanf("");
    gets(name);
    printf("inputted name is : %s\n",name);
    free(name);
    return 0;
    
}
