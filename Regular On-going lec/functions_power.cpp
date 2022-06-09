#include<iostream>
using namespace std;


int power(int a , int b){

    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b;
    

   cout<<power(a,b)<<endl;
   cin>>c>>d;

   cout<<power(c,d)<<endl;;
   cin>>e>>f;
   cout<<power(e,f)<<endl;
   
   return 0; 
}

