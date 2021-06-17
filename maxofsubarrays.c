//C program to find max of all subarrays of size k
#include<stdio.h>
#include<limits.h>
void printKmax(int A[], int n, int k)
{
    int j,max;
    for(int i=0;i<=n-k;i++)
    {
        max=A[i];
        for(j=1;j<k;j++)
        {
            if(A[i+j]>max)
            max=A[i+j];
        }
        printf("%d", max);
    }
}


int main()
{
int i,k,n;
printf("Enter size of array");
scanf("%d", &n);
int A[n];
printf("Enter size of subarray");
scanf("%d", &k);
printf("Enter values for array");
for(i=0;i<n;i++)
scanf("%d", &A[i]);
printKmax(A,n,k);
return 0;
}
