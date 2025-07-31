// Find the missing number in an array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    int arr_sum=0;
    int n_sum=n*(n+1)/2;
    cout<<"Enter the array elements it should have a missing from sequence of 1 to n: ";
    for(int i=0;i<n-1;i++){ // here we have i<n-1 cause we are missing one number knowningly
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){ // here we have i<n-1 cause we are missing one number knowningly
        arr_sum=arr_sum+arr[i];
    }
    int diff=n_sum-arr_sum;
    cout<<"The missing sequential element in the array is: "<<diff;


}