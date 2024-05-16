#include<bits/stdc++.h>
using namespace std ; 


void is( vector<int> &arr, int i , int n ){
    if(i==n){
        return ; 
    }

    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        int t = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = t ;
        j--;
    }

    is(arr, i+1, n);
}

int main(){
    int n ; 
    cout<<"Enter the no of elements in the array ";
    cin>>n ; 
    vector<int> arr(n);
    cout<<"Enter the elements of the array ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    is(arr, 0 , n);

    cout<<" The sorted array is ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<",";
    }

    return 0 ;
}