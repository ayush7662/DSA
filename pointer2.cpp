#include<iostream>
using namespace std;
int main(){


    // pointer to int is created,and pointing to some garbage address
    
    //int *p=0;
    /*int i=5;
    int *q=&i;
    cout<< q <<endl;
    cout<< *q <<endl;
    //int *P=&I;
    int *P=0;
    P = &i;


     cout<< P << endl;
    cout<<*P <<endl;
    */

    int num=5;
    int a=num;
    cout<<"a before "<< num<<endl;
    a++;
    cout<<" a after "<< num << endl;

    int *p=&num;
    cout<<"before"<< num << endl;
    (*p)++;
    cout<<" after" << num << endl;

    //copying a pointer
    int *q=p;
    cout<< p <<"-"<< q << endl;
    cout<< *p<<"-"<<*q<<endl;


    //important concept
    int i=3;
    int *t=&i;

    //cout<<(*t)++ << endl;
    *t = *t+1;
    cout<< *t << endl;
    cout<<"before t"<< t << endl;
    t=t+21;
    cout<<"after t" << t<< endl;
    return 0;
}