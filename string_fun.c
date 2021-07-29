/*
 *  Program to implement strncat_ , strcmp_ and strncpy_
 *  Compilation : gcc string_fun.c
 *  Execution : ./a.out
 *  @vasu , 1910990395 , 23/07/2021
 *  Assignment 1_c
*/
#include <stdio.h>
// Function for string Concatenation
void strncat_(char *s , char *t)
{
    int s1=0;
    // Calculate size of string s
    while(*(s + s1)!='\0')
    s1++;
      
    int s2=0;
    // Calculate size of string t
    while(*(t + s2)!='\0')
    s2++;
    
    // create string to store final resultant string i.e c = a + b    
    char ans[s1 + s2 + 1];
    int low=0;
    // first copy all characters of s in ans
    for(int i=0;i<s1;i++)
    ans[low++]=s[i];
    // copy all characters of t in ans
    for(int i=0;i<s2;i++)
    ans[low++]=t[i];
    ans[low]='\0';
    
    // output resultant string
    printf("%s",ans);
}
// Function for string comparsion
int strcmp_(char *s,char *t)
{
    int s1=0;
    // Calculate size of string s
    while(*(s + s1)!='\0')
    s1++;
    
    int s2=0;
    // Calculate size of string s
    while(*(t + s2)!='\0')
    s2++;
    
    // intialize lower index to 0
    int low=0;
    while(low<s1 && low<s2)
    {
        // if characters are not Equal
        if(*(s+low)!=*(t + low))
        {
            // return ASCII value difference
            return (int)(*(s+low) - *(t + low));
        }
        low++;
    }
    if(s1==s2) // if both Equal
    return 0;
    if(s1<s2) // if s2 is Greater than s1
    return 1;
    else
    return -1; // if s2 is Less than s1
}
// Function for copy atmost n characters of t in s
void strncpy_(char *s,char *t,int n)
{
    int low=0;
    // copy till last character not null and atmost n character
    while(low<n && *(t + low)!='\0')
    {
        *(s + low)=*(t + low);
        low++;
    }
    // output string
    printf("%s",s);
}
int main() {
    char s1[100];
    char s2[100];
    // input string s1
    printf("Enter string s1 ");
    scanf("%s",s1);
    // input string s2
    printf("Enter string s2 ");
    scanf("%s",s2);
    // output strncat_ function
    printf("strncat Function result ");
    strncat_(s1,s2);
    // output strcmp_ function
    printf("\nstrcmp Function result ");
    int t=strcmp_(s1,s2);
    if(t==0)
    printf("Equal");
    else if(t<0)
    printf("s1 is Less than s2");
    else
    printf("s1 is Greater than s2");
    // output strncpy_ function
    printf("\nstrncpy Function result ");
    strncpy_(s1,s2,5); // by default n=5
    return 0;
}
