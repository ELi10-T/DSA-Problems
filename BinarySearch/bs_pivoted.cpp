#include<bits/stdc++.h>
using namespace std;

// Given a pivoted array and a key find the elem
// arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, key = 3
// Find pivot first O(logn) && then find the element --- seems easy

int find_pivot(int arr[], int len) {
    int left = 0;
    int right = len-1;

    while(left <= right) {
        int mid = left + (right-left)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        } else if(arr[mid-1] < arr[mid]) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    return -1;
}

int pivoted_bs(int arr[], int key, int len){
    int pivot = find_pivot(arr, len);
    cout<<"This is the pivot: "<<pivot<<" \n";
    int left=0,right=len-1;
    if(key == arr[pivot]) {
        return pivot; 
    }

    if(arr[0] < key) {
        right = pivot-1;
    } else {
        left = pivot+1;
    }

    cout<<"Left: "<<left<<" Right: "<<right<<"\n";

    while(left <= right) {
        int mid = left+(right-left)/2;
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5, 6, 7, 8, 9, 10, 11, 12, 13,1,2,3}, key = 0;
    cout<< pivoted_bs(arr, key, 12)<< "\n";
}