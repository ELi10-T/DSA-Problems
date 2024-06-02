#include<bits/stdc++.h>
using namespace std;
// Basic Binary Search Problem
// Need to search an element in a sorted array. O(log(n))

int binarySearch(int arr[], int elem, int len_arr) {
    int left = 0;
    int right = len_arr-1;
    while(left <= right) {
        int mid = left+(right-left)/2;
        if(arr[mid] == elem) {
            return mid;
        } else if(arr[mid] < elem) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return -1; // Not found case
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout<<binarySearch(arr, 1, 7)<<"\n";
}