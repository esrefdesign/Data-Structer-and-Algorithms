#include <stdio.h>
#include <stdlib.h>


void arrayReverser(int array[],int size) { //this is our function to reverse the array also we have to take the size of the array as a parameter
    
    int resultArray[size]; //we create a new array to store the reversed array
    for (int i=size-1,j = 0; i >= 0 && j <= size; i--,j++) //we start a loop that will reverse the array with two pointers 
    {
        resultArray[j]=array[i]; //filling to our new array with the reversed elements index by index
        printf("[%d], ", resultArray[j]); //and every step we print the reversed element index by index
    }
};

void main(){
    int size = 4;
    int arr[4] = {1,2,3,4};
    arrayReverser(arr,size);
};