/**
 * Program to convert a string of hexadecimal digits into its equalent integer value.
 * Compilation : gcc hexa_p.c
 * Execution : ./a.out 
 * @vasu , 1910990395 , 29/7/2021
 * Assignment_1 - C
 */


#include<stdio.h>
#include<string.h> //library contains string fuctions.

// Function to convert a string of hexadecimal digits into its equalent integer value.
void htoi(char *s)
{
    // initialize answer with 0
    int answer = 0;
    int current_power = 1;
    
    int size=0;
    // calculate size of string s
    while(*(s + size)!='\0')
    {
        size++;
    }
    
    for(int i = size - 1; i >= 0 ; i--)
    {
       // if s[i] = ('0' , 'x' , 'X') skip them
       if(s[i] == '0' || s[i] == 'x' || s[i] == 'X')
       {
       continue;
       }
       
       // if character in range of '0' - '9'
       else if(s[i] >= '1'  &&  s[i] <= '9')
       {
           answer += ((s[i] - '0') * current_power);
       }
       
       // if character in range 'a' - 'f' then [10 - 15]
       else if(s[i] >= 'a' && s[i] <= 'f')
       {
           answer += ((s[i] - 'a' + 10) * current_power);
       }
       
       // if character in range 'A' - 'F' then [10 - 15];
       else if(s[i] >= 'A' && s[i] <= 'F')
       {
           answer += ((s[i] - 'A' + 10) * current_power);
       }
       
       // incerase power of 16
       current_power *= 16;
    }
    
    // output answer
    printf("%d \n" , answer);
}

int main()
{
    // taking input string
    char input_str[100];
    printf("Enter string ");
    scanf("%s" , input_str);
    // calling function.    
    htoi(input_str);
    
    return 0;
}
