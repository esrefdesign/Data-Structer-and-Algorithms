#include <stdio.h>
#include <stdlib.h>

int linearSearch(int array[],int size,int wanted) { 
    
    for (int i = 0; i < size; i++)
    {
        if (array[i]!=wanted)
        {
            continue;
        }
        else{
            return i;
        }
    }
    return -1;
}

void main(){
    int size = 4;
    int arr[4] = {2,6,32,15};
    printf("this is the index of wanted number in array(if the index is '-1' array not to contain the number wanted ): %d\n",linearSearch(arr,size,15));
}

//this algorithm's time complexity is O(n) 