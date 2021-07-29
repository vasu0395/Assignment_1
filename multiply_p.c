/*
 * Program to multiply two matrix of size n*n
 * Compilation : gcc multiply_p.c
 * Execution : ./a.out
 * @vasu , 1910990395 , 28/07/2021
 * Assignment 1-C
*/
#include <stdio.h>
int main() {
    printf("Enter matrix size ");
    int n; // input size of matrix
    scanf("%d",&n);
    int mat[n][n]; // matrix mat
    int pat[n][n]; // matrix pat 
    printf("Enter matrix1 ");
    for(int i=0;i<n;i++)
    {
	    for(int j=0;j<n;j++)
	    scanf("%d",&mat[i][j]); // input matrix mat
    }
    printf("Enter matrix2 ");
    for(int i=0;i<n;i++)
    {
	    for(int j=0;j<n;j++)
	    scanf("%d",&pat[i][j]); // input matrix pat
    }
    int res[n][n]; // resultant matrix
    for(int i=0;i<n;i++)
    {
	    for(int j=0;j<n;j++)
	    {	 
	        res[i][j]=0; // set resultant matrix to 0
	        int ans=0; // set temp ans to 0
	        for(int k=0;k<n;k++)
	        {
	            ans+=mat[i][k]*pat[k][j]; // multiply mat[i][k] * pat[k][j]	 
	        }
	        res[i][j]=ans; // set resultant matrix to ans
	    }
    }
    printf("Output Result\n");
    for(int i=0;i<n;i++)
    {
	    for(int j=0;j<n;j++)
	    printf("%d ",res[i][j]); // output resultant matrix
	    printf("\n");
    }
    return 0;
}

