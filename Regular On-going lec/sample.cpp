#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i =1;

    //print space

    while(i<=n){
        int spaces=n-i;
        while(spaces){
            cout<<" ";
            spaces=spaces-1;
        }

         //print first trialgle 

         int j =1;
         while(j<=i)
         {
             cout<<j;
             j=j+1;
         }

         //print second triangle
         int k = i-1;
         while(k){
             cout<<k;
             k=k-1;
         }
         cout<<endl;
         i=i+1;


    }
   


    
  
      

  }

