#include<iostream>
using namespace std;
int main(){
    /*int temp[10]={1,2};

    cout<< sizeof(temp) << endl;
    cout<< "1st" << sizeof(*temp) << endl;
    cout << "2nd" << sizeof(&temp) << endl;

    int *ptr =&temp[0];
    cout<< sizeof(ptr) << endl;
    cout<< sizeof(*ptr) << endl;
    cout<< sizeof(&ptr ) << endl;

    return 0;
    */

     /*int a[20]={1,2,3,45};
    cout<< "->" << &a[0] << endl;
    cout<< &a << endl;
    cout << a << endl;

    int *p =&a[0];
    cout<< p << endl;
    cout<< *p << endl;
    cout<< "->" << &p << endl;
    */

    int arr[10];

    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<< ptr<<endl;

    return 0;

}