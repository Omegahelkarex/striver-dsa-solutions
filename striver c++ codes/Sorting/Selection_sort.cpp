#include<iostream>
using namespace std ; 


int main (){
    int n ;
    cout<<"Enter the no of elements in the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for (int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    for (int i = 0 ; i < n - 1 ; i++){
        for (int j = i + 1 ; j<n; j++){
            if (arr[i]>arr[j]){
                int t =  arr[i];
                arr[i] = arr[j];
                arr[j] = t ; 
            }
        }
    }

    cout<<"The sorted array is : "<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;  
}