#include<bits/stdc++.h>
using namespace std ;


void merge( vector<int> &arr, int low , int mid, int high){
    vector<int> t ;
    int left = low ;
    int right = mid + 1 ;

    while (left <= mid && right<= high){
        if(arr[left]<arr[right]){
            t.push_back(arr[left]);
            left ++;
        }
        else {
            t.push_back(arr[right]);
            right ++ ; 
        }
    }

    while (left<=mid){
        t.push_back(arr[left]);
        left ++ ; 
    }

    while (right<=high){
        t.push_back(arr[right]);
        right ++ ;
    }

    for (int i = low ; i <= high ; i++){
        arr[i] = t[i-low];
    }
}


void mergesort( vector<int> &arr, int low , int high){
    if(low>=high) return ;
    int mid = (low + high)/2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low , mid, high);
}

int main(){
    int n ; 
    cout<<"Enter the no of elements in the array";
    cin>>n ; 
    vector<int> arr(n);
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    mergesort(arr, 0, n-1);
    cout<<"The sorted array is :"<<endl;

    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0 ; 

}