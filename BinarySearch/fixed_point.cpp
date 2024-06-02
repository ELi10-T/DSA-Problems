#include<bits/stdc++.h>
using namespace std;

// arr[i] = i. Find them

int bs_fixedPoint(int arr[], int len){
    int left = 0;
    int right = len-1;

    while(left <= right){
        int mid = left+(right-left)/2;

        if(arr[mid] == mid) {
            return mid;
        } else if(arr[mid] < mid) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {-10, -5, 3, 4, 7, 9};
    cout<<bs_fixedPoint(arr,6)<<"\n";
}