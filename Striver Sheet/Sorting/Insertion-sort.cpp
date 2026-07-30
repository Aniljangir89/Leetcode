// Repeatedly find the smallest element from the unsorted part of the array and place it at its correct position.

#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int>&arr){
    int n = arr.size();
    int i = 1;
    int key = arr[i];
    while(i<n){
        key = arr[i];
        int j = i - 1;
        while( j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    InsertionSort(arr);
    for(auto ele : arr)cout<<ele<<" ";

    return 0;
}