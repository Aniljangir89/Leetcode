// Repeatedly find the smallest element from the unsorted part of the array and place it at its correct position.

#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr){
    int n = arr.size();
    int i = 0;
    int j = 1;
    while(i<n){
        int min_idx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
        i++;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    selectionSort(arr);
    for(auto ele : arr)cout<<ele<<" ";

    return 0;
}