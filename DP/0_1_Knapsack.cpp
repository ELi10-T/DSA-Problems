#include<bits/stdc++.h>
using namespace std;

/*

// The main task in DP is to identify which problem this is. 
// Overlapping Subproblems (or) Optimal Substructure. 



Question: 
Given N items where each item has some weight and profit associated with it and also given a bag with capacity W, [i.e., the bag can hold at most W weight in it]. The task is to put the items into the bag such that the sum of profits associated with them is the maximum possible. 



Input: N = 3, W = 4, profit[] = {1, 2, 3}, weight[] = {4, 5, 1}
Output: 3



*/

// Time Complexity = O(2^n), Space Complexity = O(n) - stack for recursion
int recursiveKnapsack(int arr[], int weight[], int W, int n){

    if(W == 0 || n == 0){
        return 0;
    }

    if(weight[n-1] > W){
        return recursiveKnapsack(arr, weight, W, n-1);
    } else {
        return max(arr[n-1]+recursiveKnapsack(arr,weight, W-weight[n-1], n-1),
        recursiveKnapsack(arr,weight, W, n-1));
    }

}



int main(){

}