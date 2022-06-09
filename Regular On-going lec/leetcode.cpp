#include<iostream>
using namespace std;

// array repeatitive occurance {1,2,3,3,3,3,5,6,}   here it will return index 
// of first and last occurance {2,5}

int firstOccurance(int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int ans=-1;
    int mid = start +(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return ans;
}
int lastOccurance(int arr[], int size, int key){
    int start =0;
    int end = size-1;
    int ans=-1;
    int mid = start +(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start= mid+1;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return ans;
}


int main(){

    int odd[5]={2,3,3,3,6};
    int even[6]={8,16,24,32,40,48};

 
    int first=firstOccurance(odd,5,3);
    int second=lastOccurance(odd,5,3);

    cout<<first<<endl;
    cout<<second<<endl;

    

}