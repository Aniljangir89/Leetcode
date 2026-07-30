#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> & nums,int low,int high ){
    
}
void quickSort(vector<int>&arr,int low, int high){
    if(low>= high)return ;
    int pivot = partition(arr,low,high);
    quickSort(arr,low,pivot -1);
    quickSort(arr,pivot + 1,high);
    return ;

}

int main(){

    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i =0 ;i<n;i++)cin>>nums[i];
    quickSort(nums,0,n - 1); 
    for(auto ele : nums)cout<<ele<<" ";    
    return 0;
}