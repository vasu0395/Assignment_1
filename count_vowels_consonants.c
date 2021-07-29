/*
 * Compilation :- gcc count_vowels_consonants.c
 * Execution :- ./a.out
 * Program to find count of vowels and consonants
 * @vasu , 1910990395 ,23/07/2021
 * Assignment 1-C
*/
#include <stdio.h>
//Function to count number of vowels and consonants in given string
void count_vowels_consonants(char *name) // String passed as parameter
{
    int i=0;
    int vowels=0;
    int consonants=0;
    while(*(name + i)!='\0'){
        // check for vowels 'a','e','i','o','u'.
        if(*(name + i)=='a' || *(name + i)=='e' ||*(name + i)=='i' ||*(name + i)=='o' ||*(name + i)=='u')
        {
            vowels++;
        }
        // check for vowels 'A','E','I','O','U'.
        else if(*(name + i)=='A' || *(name + i)=='E' ||*(name + i)=='I' ||*(name + i)=='O' ||*(name + i)=='U')
        {
            vowels++;
        }
        // check for consonants
        else
        consonants++;

        i++; // increment count
    }
    printf("Vowels : %d , Consonants : %d",vowels,consonants); // print count of vowels and consonants
}
int main(){
    char name[100];
    printf("Please enter String \n");
    scanf("%[^\n]s",name); // Taking input string
    // Function to count number of vowels and consonants in given string
    count_vowels_consonants(name);
    return 0;
}
