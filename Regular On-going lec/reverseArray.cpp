#include<iostream>
using namespace std;

void reverse(int arr[],int size){

    int start=0;
    int end=size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }

    
}

void printArray(int arr[], int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

        int arr[6]={1,2,3,4,5,6};
        int arr1[5]={7,8,9,10,11};

        reverse(arr,6);
        
        reverse(arr1,5);

        printArray(arr,6);
        cout<<endl;
        printArray(arr1,5);

}