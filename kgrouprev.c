//C program to reverse an array in groups of given size
#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n,k,l,r,temp;
    printf("Enter size of your array");
    scanf("%d", &n);
    int A[n];
    printf("Enter group size");
    scanf("%d", &k);
    printf("Enter elements of the array");
    for(i=0;i<n;i++)
    scanf("%d", &A[i]);
    for(i=0;i<n;i=i+k)
    {
     l=i;
     if(i+k-1<n-1)
     r = i+k-1;
     else
     r = n-1;
     while(l<r)
     {
         temp = A[l];
         A[l] = A[r];
         A[r] = temp;
         l++;
         r--;         
     }
    }
for(i=0;i<n;i++)
printf("%d", A[i]);
}