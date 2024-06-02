#include<bits/stdc++.h>
using namespace std;

float soln(int arr1[], int arr2[], int n, int m){
    /*
        So here Assume left partition right most partitions
        left1, left2

        left1 = n-1;
        left2 = (n+m)/2-left1

        start binary_search on lowest array. 
    
    */

   if(n > m){
    return soln(arr2, arr1, m, n);
   }


   int start = 0;
   int end = n;

    while(start<=end){
        int mid = start+(end-start)/2;
        int allMid = (n+m)/2-1; // total number of elements in the left partition. 

        int left1 = mid >= 0 ? arr1[mid] : INT_MIN;
        int left2 = allMid-mid >= 0 ? arr2[allMid-mid] : INT_MIN;
        int right1 = mid+1<n ? arr1[mid+1] : INT_MAX;
        int right2 = allMid-mid+1<m ? arr2[allMid-mid+1] : INT_MAX;

        if(left1 <= right2 && left2 <= right1) {
            // Positive case
            if( (n+m) % 2 == 0 ) {
                // even elements
                return (min(right1,right2)+max(left1,left2))/2.0;
            } else {
                return max(left1, left2);
            }
        }
        else if(left1 > right2){
            end = mid-1;
        } else {
            start = mid+1;
        }   

    }


}

int main(){
    int arr1[] = { -5, 3, 6, 12, 15 };
    int arr2[] = { -12, -10, -6, -3, 4, 10 };

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    cout<<"Median of the both arrays is : "<< soln(arr1, arr2, n, m)<<"\n";
}