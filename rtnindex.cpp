// Find the element in the array and return its index

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[1000];
    int index=-1;// when the element is not found we will return this
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}