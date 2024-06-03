#include<iostream>
using namespace std;


    void print(int *P){

        cout<< *P << endl;

    }

    void update(int *P){
        //P=P+1;
        *P=*P+1;

        //cout<< "inside" << P << endl;
    }
    int getSum(int *arr, int n){

        cout<< endl <<"size"<< sizeof(arr)<<endl;
        int sum=0;
        for(int i=0;i<n;i++){
            sum +=arr[i];
        }
        return sum;
    }
    int main(){

       /*/ int value=5;
        int *P= &value;

        //print(P);

        cout<< "Before" <<  *P << endl;
        update(P);
        cout<< "After" << *P << endl;

        //print(P);

        */
        int arr[5]={1,2,3,4,5};
        cout<<"sum is"<< getSum(arr,5)<<endl;

        return 0;
    
}