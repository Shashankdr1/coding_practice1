/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void read_arr(int a[10],int n)
{
    printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
}
void print_arr(int a[10],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void search(int a[10],int n,int key)
{
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		if(key==a[i])
		{
			flag++;
			printf("Search is successful\n");
			printf("The position of first occurance is %d",i);
					break;
		}
	}
	for(int i=n;i>=1;i--)
	{
		if(key==a[i])
		{
			flag++;
			printf("\nThe position of last occurance is %d\n",i);
					break;
		}
	}
	if(flag==0)printf("Search failure\n");
	
}


int main()
{
    // array declaration 
    int arr[10], arr_size, key;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    read_arr(arr, arr_size);
    
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    
    printf("Enter key: ");
    scanf("%d",&key);
    
    search(arr,arr_size,key);
}  

//11 22 33 33 66 55 88 11 33 11
//22 33 33 66 55 88 11 33 11 55

