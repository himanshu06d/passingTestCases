#include<iostream>
using namespace std;
int main(){

    //fibonacci series
    int n ;
    cout<<"Enter the value of n ";
    cin>>n;
    int first_element=0;
    int second_element=1;
    cout<<first_element;
    cout<<second_element;
    int sum =0;
    for(int i =2;i<n;i++){
        sum=first_element+second_element;
        cout<<sum;
        first_element=second_element;
        second_element=sum;

        


    }
}