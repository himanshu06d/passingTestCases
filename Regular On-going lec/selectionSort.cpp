#include<iostream>
using namespace std;
int main(){
    int arr[]={64,25,12,22,11};
    int n = 5;
    int minindex;
    for(int i =0;i<n-1;i++){
        minindex = i;
        for(int j =i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                    minindex=j;
            }
        }
        
        swap(arr[minindex],arr[i]);
        
    }
   

    
}