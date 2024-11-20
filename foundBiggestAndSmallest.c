#include <stdio.h>
#include <stdlib.h>


int foundSmallest(int array[],int size) { 
    int smallest=array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i]>smallest)
        {
            continue;
        }
        else{
            smallest=array[i];
        }
    }
    return smallest;
}

int foundBiggest(int array[],int size) { 
    int biggest=array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i]<biggest)
        {
            continue;
        }
        else{
            biggest=array[i];
        }
    }
    return biggest;
}

void main(){
    int size = 4;
    int arr[4] = {2,6,32,15};
    printf("biggest number of array: %d\n",foundBiggest(arr,size));
    printf("biggest number of array: %d",foundSmallest(arr,size));
}