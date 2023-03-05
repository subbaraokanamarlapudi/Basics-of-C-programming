#include<stdio.h>

void PrintNum(int arr[] , int n);    // or we can keep inplace of int *arr[]

int main()
{
    int arr[] = {1,2,3,4,5,6};
    PrintNum(arr,6);
}

void PrintNum(int arr[] , int n)      // or we can keep inplace of int *arr[]
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");
}

// Finally wil get the same answer for int arr[] and int *arr[].