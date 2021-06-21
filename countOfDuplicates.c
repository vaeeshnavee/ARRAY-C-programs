#include<stdio.h>
//count number of duplicate elements in an array 
int main()
{
    int A[1000], size, count=0,i,j;
    printf("Enter size of the array");
    scanf("%d",&size);
    printf("Enter elements of the array");
    for(int i =0;i<size;i++)
    scanf("%d",&A[i]);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++){
        if(A[i]==A[j])
        {
            count++;
            
        }
    }}

    printf("The count of duplicate elements are %d", count);
return 0;
}
