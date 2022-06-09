#include<iostream>
using namespace std;

void reversealternate(int arr[],int size){
    int start=0;
    int end=1;
    while(start<size && end<size){
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
}

void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[]={1,2,3,4,5,6};

    reversealternate(arr,6);

    printarr(arr,6);

}