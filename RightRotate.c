//Right rotate an array m times
#include<stdio.h>
void printArray(int A[], int n)
{
    int i=0;
    for(i =0;i<n;i++)
    {
        printf("%d", A[i]);
    }
}
void RightRotate(int A[], int n)
{
    int i, last;

    /* Store last element of array */
    last = A[n - 1];

    for(i=n-1; i>0; i--)
    {
        /* Move each array element to its right */
        A[i] = A[i - 1];
    }

    /* Copy last element of array to first */
    A[0] = last;
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
    RightRotate(A,n);
}
    printf("\nRight Rotated Array :");
    printArray(A,n);
}