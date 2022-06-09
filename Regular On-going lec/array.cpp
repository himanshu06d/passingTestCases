#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int getMax(int arr[],int n){

    int max=INT_MIN;
    for(int i =0;i<n;i++){

        if(arr[i]>max){
            max=arr[i];
        }


    }
    return max;
}

int getMin(int arr[],int n){

    int mini=INT_MAX;
    for(int i =0;i<n;i++){

        // if(arr[i]<min){
        //     min=arr[i];
        // }

        mini = min(mini,arr[i]);


    }
    return mini;
}


int main (){

    int size;
    cin>>size;

    int arr[100];

    for(int i=0;i<size;i++){
        
        cin>>arr[i];
    }

   cout<< "Maximum element in the array is "<<getMax(arr,size)<<endl;
   cout<< "Minimum element in the array is "<<getMin(arr,size)<<endl;

    return 0;

}