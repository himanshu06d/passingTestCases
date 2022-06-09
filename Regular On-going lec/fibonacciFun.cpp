#include<iostream>
using namespace std;

int valueAtN(int n){

    if(n==1){
        return 0;
      
    }
    else if(n==2){
       return 1;

    }
        
    int first_element=0;
    int second_element=1;
    int sum=0;
    int nextNumber;
    

    for(int i=3;i<=n;i++){
            nextNumber=first_element+second_element;
            first_element=second_element;
            second_element=nextNumber;


    }

    return nextNumber;

}


int main(){

    int n;
    cin>>n;
    

    cout<<valueAtN(n)<<endl;

    


}