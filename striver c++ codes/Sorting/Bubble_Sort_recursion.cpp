#include<bits/stdc++.h>
using namespace std ;

void bs(vector<int> &arr, int n){
    if(n==1){
        return ;
    }

    for(int i = 0 ; i < n -1 ; i++){
        if(arr[i]>arr[i+1]){
            int t = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = t;
        }
    }

    bs(arr,n-1);
}



int main(){
    int n ;
    cout<<" Enter the no of elements ";
    cin>>n;
    vector<int> arr(n);
    cout<<" Enter the elements of the array ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    bs(arr,n);

    cout<<"The sorted array is ";
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<",";
    }

    return 0 ;
}