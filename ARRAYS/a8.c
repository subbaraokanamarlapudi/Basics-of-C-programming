//Write a fuction to reverse an array

#include<stdio.h>

// int CountOdd(int arr[] , int n);
int reverse(int arr[] , int n);
void PrintArr(int arr[] , int n);

int main()
{
    int arr[] = {1,2,3,4,5};
    reverse(arr,5);
    PrintArr(arr,5);
}

void PrintArr(int arr[] , int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");
}

int reverse(int arr[] , int n)
{
    for(int i = 0; i<n/2; i++)
    {
        int Firstval = arr[i];
        int SecondVal = arr[n-i-1];

        arr[i] = Firstval;
        arr[n-i-1] = SecondVal;
    }
}

// int CountOdd(int arr[] , int n)
// {
//     int count = 0;
//     for(int i = 0; i<n; i++)
//     {
//         if(arr[i]%2!=0)
//         {
//             count++;
//         }
//     }

//     return 0;
// }