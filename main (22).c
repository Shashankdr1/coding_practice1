/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
  	char s[100];
  	int res;
  	int i,length;
  	int max = -1;
  	
  	int f[256] = {0}; 
 
  	printf("\n Enter a line\n");
  	gets(s);
  	length = strlen(s);
  	for(i = 0; i < length; i++)
  	{
  		f[s[i]]++;
	}
  	for(i = 0; i < length; i++)
  	{
		if(max < f[s[i]])
		{
			max = f[s[i]];
			res = s[i];
		}
	}
	printf("\nThe Maximum Occurring Character in the given line is = %c ", res);
	return 0;
}
