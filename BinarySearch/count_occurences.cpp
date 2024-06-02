#include<bits/stdc++.h>
using namespace std;

int floor_num(int arr[],int key, int len){
    int left = 0;
    int right = len-1;
    while(left <= right) {
        int mid = left+(right-left)/2;
        if((mid == 0 || arr[mid-1] != key) && arr[mid] == key){
            return mid;
        } else if(arr[mid] < key) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return -1;
}

int ceil_num(int arr[], int key, int len){
    int left = 0;
    int right = len-1;
    while(left <= right) {
        int mid = left+(right-left)/2;
        if(((mid == len-1) || arr[mid+1] > key) && arr[mid] == key){
            return mid;
        } else if(arr[mid] > key){
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19}, x = 5;
    cout<<floor_num(arr, 10, 7)<<"\n";
    cout<<ceil_num(arr, 10, 7)<<"\n";

    // count num of occurences, ceil_num-floor_num+1;
}