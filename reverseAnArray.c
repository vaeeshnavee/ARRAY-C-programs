
#include<stdio.h>
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
}    
 

void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
}
 
/* Driver function to test above functions */
int main()
{
    int arr[1000] ,n;
    printf("Enter size of the array");
    scanf("%d",&n);
    printf("Enter elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printArray(arr, n);
    rvereseArray(arr, 0, n-1);
    printf("Reversed array is \n");
    printArray(arr, n);   
    return 0;
}