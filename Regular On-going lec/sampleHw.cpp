#include<iostream>
using namespace std;

int setBits(int a){
    int count =0;
    while(a!=0){
        if(a&1==1){
            count++;
        }
        a>>=1;
    }
    return count;

}

int main(){

    int a,b;
    cin>>a>>b;
    int ans1=setBits(a);
    int ans2= setBits(b);
    cout<<ans1+ans2<<endl;


}