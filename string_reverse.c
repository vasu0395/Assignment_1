/*
   Compilation :- gcc string_reverse.c
   Execution :- ./a.out
   Program to find count of vowels and consonants
   @vasu , 1910990395 ,23/07/2021
   Assignment 1-C
*/
#include <stdio.h>
// Function to Reverse given string
void reversed(char *name) // Parameter Passed : string
{
    int size=0;
    while(*(name + size)!='\0'){ // Finding size of given string
    size++;
    }
    
    int lower_index=0; // set lower_index to 0
    int upper_index=size-1; // set upper_index to string size - 1 
    while(lower_index <= upper_index) // keep swapping character till lower_index <= upper_index
    {
        char ch=*(name + lower_index); // swapping characters
        *(name + lower_index)=*(name + upper_index);
        *(name + upper_index)=ch;
        lower_index+=1; // increase lower_index
        upper_index-=1; // decrease upper_index
    }
}
int main(){
    char name[50];
    printf("Enter string\n");
    scanf("%[^\n]s",name); // input string
    reversed(name); // Function to Reverse string
    printf("%s\n",name); // output new Reverse string
    return 0;
}

