#include<stdio.h>
#include<limits.h>
//C program to copy elements of one array to another
int Copytodiff(int A[], int n)
{ 
    int B[n];
for(int i=0;i<n;i++)

    B[i]=A[i];

for(int i=0; i<n; i++)
{
    printf("%d", B[i]);
}
}
void main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter elements of array");
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    Copytodiff(A,n);
}