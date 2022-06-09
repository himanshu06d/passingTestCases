#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mask =0;
    int count=0;
    int ans=0;
    while(n>>1!=0){
            count +=1;
    }
    while(count>=0){
        mask = n<<1 || 1;
        count -=1;
    }
    cout<<count<<endl;
    ans = ~n & mask;
    cout<<ans;
    return ans;
}