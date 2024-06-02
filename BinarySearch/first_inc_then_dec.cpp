#include<bits/stdc++.h>
using namespace std;

int bs_firstInc_Dec(int arr[], int len) {
    int left=0;
    int right=len-1;

    while(left<=right){
        int mid = left+(right-left)/2;

        if((mid == 0 && arr[mid]>arr[mid+1]) || (mid == len-1 && arr[mid-1] < arr[mid]) || (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])) {
            return mid;
        } else if(arr[mid] < arr[mid-1]){
            right = mid-1;
        } else {
            left = mid+1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {120, 100, 80, 20, 0};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<bs_firstInc_Dec(arr, len) <<"\n";
}