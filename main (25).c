/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int no_pages;
};

void read(struct book *);
void print(struct book *);

int main()
{
   struct book bk;
   struct book *sptr=&bk;
   read(sptr);
   print(sptr);
   return 0;     
}      
   
 void read(struct book* ptr) 
{
     printf("Enter the title, author name, price and number of pages in order\n");
     scanf("%s%s%f%d",ptr->title,ptr->author,&(ptr->price),&(ptr->no_pages));
}

void print(struct book* ptr) 
{
    printf("The book details are\n");
    printf("\n%s\t%s\t%f\t%d\n",ptr->title,ptr->author,(ptr->price),(ptr->no_pages)); 
}
