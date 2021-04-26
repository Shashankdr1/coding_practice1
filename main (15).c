/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
char* allocate(char *a)
{
	a=(char *)malloc(sizeof(char));
	return a;

}
void input(char *a)
{
    printf("enter the name\n");
	scanf("%s",a);
}
void output(char *a)
{
    printf("the name is\n");
	printf("%s\n",a);
}


void main()
{
	char* a;
	a=allocate(a);
	input(a);
	output(a);
	free(a);
}
