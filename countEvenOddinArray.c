#include<stdio.h>
#include<limits.h>
//Program to count number of odd and even elements in an array



void countEvenOdd(int A[], int n)
{
    int i, e=0, o=0;
    for(i=0;i<n;i++)

    if(A[i]%2==0)
    e++;
    else
    o++;
printf("Even elements %d", e);
printf("Odd elements %d", o);

}
int main()
{
    int i,n;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the elements of the array");
int A[n];
for(i=0;i<n;i++)
scanf("%d",&A[i]);
countEvenOdd(A,n);

}
