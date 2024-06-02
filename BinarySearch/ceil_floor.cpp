#include<bits/stdc++.h>
using namespace std;

int ceil_array(int arr[], int key, int len) {

// mid-1 is not getting checked here because, it is getting checked here
    if(key <= arr[0]) {
        return 0;
    }

    int left = 0;
    int right = len-1;

    while(left <= right) {
        cout<<"Left : "<<left<<" Right: "<<right<<"\n";
        int mid = left+(right-left)/2;
        if((arr[mid] == key) || (arr[mid] > key && arr[mid-1] < key)) {
            return mid;
        } else if(arr[mid] < key) {
            left = mid+1;
        } else {
            right=mid-1;
        }
    }

    return -1;

}

int floor_arr(int arr[], int key, int len){
    int left = 0;
    int right = len-1;

    if(arr[len-1] <= key) {
        return len-1;
    }

    while(left<=right){
        int mid = left+(right-left)/2;

        if((arr[mid] == key) || (arr[mid]<key && arr[mid+1] > key)){
            return mid;
        } else if(arr[mid]< key) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int key = 21;
    cout<<ceil_array(arr, key, 7)<<"\n";
    cout<<floor_arr(arr, key, 7)<<"\n";
}