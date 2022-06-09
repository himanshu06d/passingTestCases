#include<iostream>
using namespace std;


bool linearSearch(int arr[] , int size , int key){

    for(int i = 0; i<size;i++){
        if(arr[i]==key){
            return 1;
        }
        
    }

    return 0;



    
}

int main(){

    cout<<"Enter the size of array"<<endl;

    int size;

    cin>>size;

    int arr[100];

    cout<<"Enter the values of elements"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to search"<<endl;
    cin>>key;

    bool found = linearSearch(arr,size,key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }




}