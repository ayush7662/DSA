#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    //creation a 2d array

    int **arr=new int*[n];

    for(int i=0;i<n;i++){
        arr[i]=new int[n];

    }

    //creation done

    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }

    //taking output
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] <<" ";
        }
        cout<< endl;;
    }
    return 0;
}