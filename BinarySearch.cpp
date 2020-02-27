#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    
    int low=0;
    int high=n-1;
    int prev_mid=-1;
    int mid =0;
    do {
        if(high-low<=1)
            return 0;
        mid = (high-low)/2;
        
        if (arr[mid]==x)
            return mid;
            
        if(arr[mid] < x)
            high=mid;
        else
            low=mid;
    } while(1);
}

int main() {
    
    int arr[]={1, 3, 6, 9, 11, 15, 20, 33, 44, 50, 61}; // 11 items
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, n, 15) << endl; //zero-indexed
    
    return 0;
}