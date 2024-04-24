#include<iostream>
using namespace std ;

int main(){
    int n ; 
    cout<<"Enter the no of elements in the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for (int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    for (int i = 0 ; i < n - 1 ; i++){
        int j  = i+1 ;
        while(j>0 && arr[j-1]>arr[j]){
            int t = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = t;
            j--;
        }
    }

    cout<<"The sorted array is : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}