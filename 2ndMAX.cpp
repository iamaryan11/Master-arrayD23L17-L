// return the second maximum in an array--my approach

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int size;
    int arr[1000];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,arr+size);
    cout<<"The second maximum element in array is: ";
    cout<<arr[size-2];
}
