#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[],int size,int wanted) { 
    int min=0;// minumum index of our active subarray
    int max=size-1; // maximum index of our active subarray
    int mid=(min+max)/2;// medium index of our active subarray

    while (min<=max)
    {
        mid =(min+max)/2;
        if (array[mid]<wanted)
        {
            min=mid+1;
        }
        else if (array[mid]>wanted)
        {
            max = mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

void main(){
    int size = 9;
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    printf("this is the index of wanted number in array(if the index is '-1' array not to contain the number wanted ): %d\n",binarySearch(arr,size,4));
}

//this algorithm's time complexity is O(log n)