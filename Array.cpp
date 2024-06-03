/*#include<iostream>
using namespace std;

void printarray(){

}
int main(){
    int number[15];

    cout<<"value of 14 index"<<number[14]<<endl;

    int second[3]={5,7,11};

    cout<<"value of 2 index"<<second[2]<<endl;

    int third[15]={2,7};

    int n=15;
    for(int i=0;i<=n;i++){
        cout<<third[i]<<" ";
    }

   int fourth[10]={1};
    n=10;
    cout<<"printing the array"<<endl;

    for(int i=0;i<=n;i++){
        cout<<fourth[i]<<" ";
    }

    int fifth[10]={1};
    n=10;
    cout<<"printing the array"<<endl;
    for(int i=0;i<=n;i++){
        cout<<fifth[i]<<" ";
    }

    cout<<endl<<"Everything is fine"<<endl<<endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"printing Done"<<endl;
}
int main(){

    int number[15];
    cout<<"value at 14 index"<<number[14]<<endl;
     int second[3]={5,7,11};
     cout<<"value at 2 index"<<second[2]<<endl;

     int third[15]={2,7};
     int n=15;
     printArray(third,15);

     int fourth[10]={0};
     n=10;
     printArray(fourth,10);

     int fifth[10]={1};
     n=10;
     printArray(fifth,10);

     cout<<"Everything is fine"<<endl;
     */

/*#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing Done"<<endl;


}
int main(){
    int number[15];
    cout<<"value of 14 index"<<number[14]<<endl;

    int second[3]={5,7,11};
    cout<<"value of 2 index"<<second[2]<<endl;

    int third[15]={2,7};
    int n=15;
    printArray(third,15);
    int thirdsize=sizeof(third)/sizeof(int);

    int fourth[10]={0};
    n=10;
    printArray(fourth,10);

    int fifth[10]={1};
    n=10;
    printArray(fifth,10);

    int fifthsize=sizeof(fifth)/sizeof(int);
    cout<<"size of fiift is"<<fifthsize<<endl;

    char ch[5]={'a','b','c','r','p'};
    cout<<"printing the array"<<endl;


    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<<"printing Done"<<endl;
    double float firstFloat[6]
    float firstFloat[6]
    bool firstBool[9];

    cout<<endl<<"Everything is fine"<<endl<<endl;;
    return 0;
}
*/



/*#include<iostream>
using namespace std;
int getMin(int num[],int n){

    int min= INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int getMax(int num[],int n){

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];

        }
    }
    return max;
}
int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];

    }
    cout<<"Maximum value is"<<getMax(num,size)<<endl;
    cout<<"Minimum value is"<<getMin(num,size)<<endl;
    return 0;
}
*/


/*#include<iostream>
using namespace std;
int geMin(int num[],int n){
    int mini=INT_MAX;

    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
    }
    return mini;
}
int getMax(int num[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,num[i]);

    }
    return maxi;

}
int main(){
    int size;
    cin>>size;
    int num[100];
     for(int i=0;i<size;i++){
        cin>>num[i];

    }
    cout<<"Maximum value is"<<getMax(num,size)<<endl;
    cout<<"Minimum value is"<<getMin(num,size)<<endl;
    return 0;
}
*/


//arrayscope
#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<"Inside the function"<<endl;
    arr[0]=120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"going back t main function";
}

int main(){
    int arr[3]={1,2,3};

    update(arr,3);
    cout<<endl<<"printing in main function"<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}


