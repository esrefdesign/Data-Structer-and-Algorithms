#include <stdio.h>

void selectionSort(int arr[],int MAX)
{
    for (int i = 0; i < MAX; i++)
    {
        int min = i;  

        for (int j = i+1; j < MAX; j++)
        {
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if (min!=i)
            {
                int value=arr[min];  
                arr[min]=arr[i];
                arr[i]=value;
            }
        
    }
    
}

void printListedArray(int arr[],int max){
    for (int i = 0; i < max; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main()
{
    int arr[]={5,1,4,2,8};
    int MAX= sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr,MAX);
    printListedArray(arr,MAX);
    
    
    
    return 0;
}

//this algorithm's Big O is O(n^2) because it has two nested loops. It is not efficient for large data sets