/*
 * Program for Reverse Polish Expression
 * Execution : gcc pro_p.c
 * compilation : ./a.out
 * @vasu , 1910990395 , 29/07/2021
 * Assignment 1_c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// creating own stack st
int st[100];
// inital index -1
int ind=-1;
// push operation
void push(int x)
{
    // increment index count
    ind++;
    // checking overflow condition
    if(ind==100)
    return;
    // push element x at index ind
    st[ind]=x;
}
// pop operation
void pop()
{
    // checking underflow condition
    if(ind==-1)
    return ;
    // decrement ind
    ind--;
}
// top operation
int top()
{
    // return top element of stack
    return st[ind];
}
int main() {
    printf("Enter Expression Lenght ");
    // inital expression size
    int t;
    scanf("%d",&t);
    printf("Enter Expression ");
    // iterate over all tokens
    for(int i=0;i<t;i++)
    {
        // creating tokens string
	char tokens[100];
	scanf("%s",tokens);
	// if tokens ('+','-','*','/')
	if(strcmp(tokens,"+")==0 || strcmp(tokens,"-")==0 || strcmp(tokens,"/")==0 || strcmp(tokens,"*")==0)
        {
	    // getting top element
            int x=top();
	    // pop operation to remove it from stack
            pop();
	    // getting top element
            int y=top();
	    // pop operation to remove
            pop();
	    // using strcmp function which return 0 if both string equal
            if(strcmp(tokens,"+")==0)
            {
		// push result to stack
                push(x + y);
            }
	    // using strcmp function which return 0 if both string equal
            if(strcmp(tokens,"-")==0)
            {
		// push result to stack
                push(y - x);
            }
	    // using strcmp function which return 0 if both string equal
            if(strcmp(tokens,"*")==0)
            {
		// push result to stack
                push(x * y);
            }
	    // using strcmp function which return 0 if both string equal 
            if(strcmp(tokens,"/")==0)
            {
		 // push result to stack
                 push(y/x);
            }
        }
        else
        {
	    // using atoi inbulit function to convert string into int
            int val = atoi(tokens);
	    // push value to stack
            push(val);
        }
    }
	// output 
    printf("Reverse Polish Expression Result : %d\n",top());
    return 0;
}
