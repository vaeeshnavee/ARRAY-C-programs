#include<stdio.h>

void input(int *A, int i, int n)
{
    if(i<n){
    scanf("%d",&A[i]);
    input(A,i+1,n);
    }
}
void output(int *A, int i, int n)
{
    if(i<n){
    printf("%d",A[i]);
    output(A,i+1,n);
    }
}
int main(){
int A[1000];
int i,n;

    printf("Enter size of the array");
    scanf("%d", &n);
    printf("Enter the elements");
    input(A,0,n);
    output(A,0,n);
}