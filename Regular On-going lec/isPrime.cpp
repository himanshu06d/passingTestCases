#include<iostream>
using namespace std;

bool isPrime(int n ){

    bool flag=false;
    for(int i =2;i<n;i++){
        if(n%i==0){
            flag=true;
        }

    }
    if(flag){
        cout<<"Not prime"<<endl;

    }
    else{
        cout<<"Prime"<<endl;
    }
    
    return false;

}

int main(){
    int n;
    cin>>n;
    isPrime(n);
    
}