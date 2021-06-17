//program to check total number of negative numbers in an array
#include<stdio.h>
#include<limits.h>
int  checkSign(int A[],int n)
{ int count =0;
    for(int i=0;i<n;i++)
  {  if(A[i]<0)
    count++;
    else
    printf("No negative number");
  }
  printf("Number of negative integers are %d", count);
}
int main()
{
  int n;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter elements of the array");
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    checkSign(A,n);
}