#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

void merge(vector<int>&arr,int low,int mid,int high){
    int n = arr.size();
    vector<int>temp1,temp2;
    for(int i =low;i<=mid;i++)temp1.push_back(arr[i]);
    for(int i =mid + 1;i<=high;i++)temp2.push_back(arr[i]);
    int i =0,j =0;
    while(i<temp1.size() && j<temp2.size()){
        if(temp1[i]<temp2[j]){
            arr[low++] = temp1[i];
            i++;
        }else{
            arr[low++] = temp2[j];
            j++;
        }
    }
    while(i<temp1.size()){
        arr[low++] = temp1[i++];
    }
    while(j<temp2.size()){
        arr[low++] = temp2[j++];
    }
    return ;
}

void mergeSort(vector<int>&arr,int low,int high){
    if(high<=low)return;
    int mid = (low + high)>>1;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid + 1,high);
    merge(arr,low,mid,high);
    return ;
}
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)cin>>arr[i];
    mergeSort(arr,0,n - 1);
    for(auto ele: arr)cout<<ele<<" ";
    return 0;
}