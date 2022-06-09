#include<iostream>
using namespace std;

//sum of array 

int sum(int arr[], int n ){
    int sum = 0 ;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    cout<<sum;

    return sum; 
}

int main(){


    int size;
    cin>>size;
    
    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    sum(arr,size);




}