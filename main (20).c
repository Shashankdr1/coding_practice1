/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i,words=0;
 
    printf("Enter  the string\n");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
    	if(s[i]==32)
    	 words++;
 
 	}
 	if(i>0)
 	 words++;
 	 
 	
     
    printf("no of words in string = %d\n",words);
    
    return 0;
}


