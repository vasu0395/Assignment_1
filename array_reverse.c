/*
 * Compilation :- gcc array_reverse.c
 * Execution :- ./a.out
 * Program to Reverse Array Elements
 * @vasu , 1910990395 ,23/07/2021
 * Assignment 1-C
*/
#include <stdio.h>
// Function to Reverse given Array
void reversed(int arr[],int size) // Parameter Passed : Array and Array's size
{
    int lower_index=0; // set lower_index to 0
    int upper_index=size-1; // set upper_index to size - 1 
    while(lower_index <= upper_index) // keep swapping character till lower_index <= upper_index
    {
        int temp=arr[lower_index]; // swapping characters
        arr[lower_index]=arr[upper_index];
        arr[upper_index]=temp;
        lower_index+=1; // increase lower_index
        upper_index-=1; // decrease upper_index
    }
}
int main(){
    printf("Enter Array size\n");
    int size;
    scanf("%d",&size); // input size of Array
    printf("Enter Array Elements\n");
    int arr[size]; // create Array of capacity size
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]); // input Elements of Array
    reversed(arr,size); // Function to Reverse Array
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]); // output Array Elements
    return 0;
}

