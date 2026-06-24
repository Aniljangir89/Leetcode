// Repeatedly find the smallest element from the unsorted part of the array and place it at its correct position.

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr){
    int n  = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return ;
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
    BubbleSort(arr);
    for(auto ele : arr)cout<<ele<<" ";

    return 0;
}