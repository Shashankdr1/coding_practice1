/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
void reverse_string(char*);
void reverse_words(char*);

int main() {
	char a[100];

	gets(a);
	reverse_words(a);

	printf("%s\n", a);

	return 0;
}

void reverse_words(char *s) {
	char b[100], *t, *z;
	int c = 0;

	t = s;
while (*t) {                           
		while (*t != ' ' && *t != '\0') {    
			b[c] = *t;
			t++;
			c++;
		}
		b[c] = '\0';
		c = 0;

		reverse_string(b);        

		z = b;

		while (*z) {    
			*s = *z;
			z++;
			s++;
		}

		while (*s == ' ') {                 
			s++;
		}
		
		t = s;                    
	}
}


void reverse_string(char *t) {
	int l, s,e;
	char temp;

	l = strlen(t);
	e = l - 1;
	s = 0;
	while (s < e)
	{
		temp = t[s];
		t[s] = t[e];
		t[e] = temp;
		s++;
		e--;
	}
}
