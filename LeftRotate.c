//Left rotate an array m times
#include<stdio.h>
void printArray(int A[], int n)
{
    int i=0;
    for(i =0;i<n;i++)
    {
        printf("%d", A[i]);
    }
}
void LeftRotate(int A[],int n)
{
    int i, first;
    first = A[0];
    for(i=0;i<n-1;i++)
    {
        A[i] = A[i+1];
    }
    A[n-1] = first;
}
int main()
{
    int A[10];
    int n,i,m;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter rotations:");
    scanf("%d",&m);
    printf("Enter the elements :");
    for( i =0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Original Array :");
    printArray(A,n);
    for (i=0;i<m;i++)
{    
    LeftRotate(A,n);
}
    printf("\nLeft Rotated Array :");
    printArray(A,n);
}