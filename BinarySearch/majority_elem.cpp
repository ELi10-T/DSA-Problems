#include<bits/stdc++.h>
using namespace std;

// Question : An element repeats more than N/2 times, 
// return the majority element. 

// need to find the leftmost key, and rightmost key 
int check_majority(int arr[], int key, int len) {
    int left = 0;
    int right = len-1;
    int final_left = left+(right-left)/2;
    int final_right = left+(right-left)/2;

    // for finding left most num
    while(left <= right) {
        int mid = left+(right-left)/2;
        if(arr[mid] == key) {
            final_left = mid;
            right = mid-1;
        } else {
            left = mid+1;
        }
    }

    left = 0;
    right = len-1;

    // for finding right most num
    while(left <= right) {
        int mid = left+(right-left)/2;
        if(arr[mid] == key) {
            final_right = mid;
            left=mid+1;
        } else {
            right = mid-1;
        }
    }

    cout<<"Left most place: "<<final_left<<" Right most place: "<<final_right<<"\n";
    return final_right-final_left;
}   // takes O(2logn). There is a better soln

int checkMajority_GFG_bs(int arr[], int key, int len) {
    int left = 0;
    int right = len-1;
    int left_most = 0;

    while(left <= right) {
        int mid = left+(right-left)/2;

        if((mid == 0 || key > arr[mid-1]) && arr[mid] == key) {
            return mid;
        } else if(arr[mid] < key) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    return -1;
}

bool check_maj_GFG_final(int arr[], int key, int len){
    int val = checkMajority_GFG_bs(arr, key, len);
    if(val == -1) {
        return false;
    }

    if(((val + len/2) <= len-1) && (arr[val+len/2] == key)){
        return true;
    }

    return false;
}


int main() {
    int arr[] = {1, 2, 3, 3, 3, 3, 10}, x = 0;
    cout<<check_maj_GFG_final(arr, x, 7)<<"\n";
}