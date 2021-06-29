
//Element with highest frequency in an Array using Moore's voting Algo
#include <iostream>
using namespace std;
 
int maxFreq(int *arr, int n) {
    //using moore's voting algorithm
    int res = 0;
    int count = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[res]) {
            count++;
        } else {
            count--;
        }
         
        if(count == 0) {
            res = i;
            count = 1;
        }
         
    }
     
    return arr[res];
}
 
int main()
{
    int arr[] = {40,50,50,40,50,50,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq =  maxFreq(arr , n);
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == freq) {
            count++;
        }
    }
    cout <<"Element " << maxFreq(arr , n) << " occurs " << count << " times" << endl;;
    return 0;
  
}