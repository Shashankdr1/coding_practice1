/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct book
{
    int book_id;
    char book_title[30];
    char author[30];
    int price;
};
struct book a;
int main()
{
    printf("enter the book_id,book_title,author,price\n");
    scanf("%d%s%s%d",&a.book_id,a.book_title,a.author,&a.price);
    printf("\n%d\t%s\t%s\t%d\n",a.book_id,a.book_title,a.author,a.price);
}
