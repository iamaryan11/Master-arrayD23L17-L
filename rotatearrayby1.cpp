// Rotate the given array by one [2,11,4,5,6]--> [6,2,11,4,5]

#include<iostream>
using namespace std;
int main(){
    int size;
    int i;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[1000];
    cout<<"Enter array elements: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Orginal array is: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int k=size-1;k>=0;k--){
        arr[k+1]=arr[k];
    }
    arr[0]=arr[size];
    cout<<"The rotated array is: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}