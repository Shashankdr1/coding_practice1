/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void read_arr(int [],int);
void print_arr(int [],int);
void print_odd(int [],int);
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d",&arr_size);
    printf("enter the array elememts\n");
    read_arr(arr,arr_size);
    printf("The array elements are \n");
    print_arr(arr,arr_size);
    printf("The  odd elements are\n");
    print_odd(arr,arr_size);
}
void read_arr(int arr[],int arr_size)
{
    int i;
    for(i=0;i<arr_size;i++)
        scanf("%d",&arr[i]);
}
void print_arr(int arr[],int arr_size)
{
    int i;
    for(i=0;i<arr_size;i++)
        printf("%d\t",arr[i]);
    printf("\n");    
    
}
void print_odd(int arr[],int arr_size)
{
    int i;
    for(i=0;i<arr_size;i++)
    {
         if(arr[i]%2!=0)
            printf("%d\t", arr[i]);
    }        
}

