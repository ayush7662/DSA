#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<n;i++){

        if(i==0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    cin>>n;


    if(isPrime(n)){
        cout<<"it is a prime number"<<endl;
    }
    else{
        cout<<"it is not a prime number"<<endl;;

    }
    return 0;
}
