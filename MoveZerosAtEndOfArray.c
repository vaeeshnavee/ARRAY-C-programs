//program to move all zeroes at the end of the array
#include<stdio.h>
#include<limits.h>
void pushZerosToEnd(int A[],int n)
{
    int count =0;
    for (int i=0; i<n; i++)
    if(A[i]!=0)
    A[count++] = A[i];
    while(count<n)
    A[count++] =0;
}
void main()
{
    int i,n,temp;
    printf("Enter the size of the array");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of the array");
    for( i=0;i<n;i++)
    scanf("%d", &A[i]);
    pushZerosToEnd(A,n);
    for(i=0;i<n;i++)
    
 printf("%d", A[i]) ;

}

