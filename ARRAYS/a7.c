//Write a function to count the no.of odd numbers in an array

#include<stdio.h>

int CountOdd(int arr[] , int n);
int main()
{
    int arr[] = {1,2,3,4,5,6};
    printf("%d",CountOdd(arr,6));
}

int CountOdd(int arr[] ,int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }

    return count;
}