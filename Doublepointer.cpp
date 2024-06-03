#include<iostream>
using namespace std;


/*void update(int **P2){
  //  P=P+1;

  
 // *P2=*P2+1;

 **P2=**P2+1;
}

int main(){

    

    

    int i= 5;
    int* P= &i;
    int** P2 =&P;

   /*/ 
   /*cout<< endl << endl << "sab sahi chal rha hai" << endl << endl;

    cout<< " printing P " << P << endl;
    cout<<" address of P "<< &P << endl;

    cout<< *P2 << endl;
    cout<< i << endl;
    cout<< *P << endl;
    cout<< **P2 << endl;


    cout<< &i << endl;
    cout<< P << endl;
    cout<< *P2 <<endl;

    cout<< &P << endl;
    cout<< P2 << endl;
    */


   /* cout<< endl <<endl;
    cout<<"before"<<i<<endl;
    cout<<"before"<<P<<endl;
    cout<<"before"<<P2<<endl;
    update(P2);
    cout<<"after"<< i<<endl;
    cout<<"after"<<P<<endl;
    cout<<"after"<<P2<<endl;
    cout<<endl<<endl;
    */

    //int main(){
       /*
        int first=8;
        int second=18;
        int *ptr =&second;
        *ptr=9;
        cout<< first <<" "<<second <<endl;
    */

   
   /*
    int first=6;
    int *P=&first;
    int *q=P;
    (*q)++;
    cout<< first << endl;
    */

 
 /*
    int first=8;
    int *P=&first;
    cout<<(*P)++<<" ";
    cout<< first << endl;
    */


   
   
   /* int *P=0;
    int first =110;
    *P=first;
    cout<< *P <<endl;
    */


   
   /*
    int first=8;
    int second=11;
    int *third=&second;
    first=*third;
    *third=*third+2;
    cout<<first <<" "<<second <<endl; 
    */


   
   /* float f=12.5;
    float P=21.5;
    float* ptr =&f;
    (*ptr)++;
    *ptr = P;
    cout<< *ptr <<" "<< f <<" "<<P<<endl;
    */


  
  
  /*  int arr[5];
    int *ptr;
    cout<< sizeof(arr)<<" "<<sizeof(ptr)<<endl;
    */

 
 /*
    int arr[]={11,21,13,14};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;
*/

 /*int arr[6]={11,21,31,};
cout<<arr<<" "<<&arr<<endl;

*/


/*int arr[6]={11,21,13};
cout<<(arr+1)<<endl;
*/


/*int arr[6]={11,21,13};
int *P=arr;
cout<< P[2] << endl;
*/


/*int arr[]={11,12,13,14,15};
cout<<(*arr)<<" "<<*(arr+3);
*/

/*
int arr[]={11,21,31,41};
int *ptr = arr++;
cout<<*ptr<<endl;
*/


/*char ch='a';
char *ptr=&ch;
ch++;
cout<<*ptr<<endl;
*/

 /*
 char arr[]="abcde";
char *P=&arr[0];
cout<<P<<endl;
*/


/*
char arr[]="abcde";
char *P = &arr[0];
P++;
cout<< P << endl;
*/


/*
char str[]="babbar";
char *P =str;
cout<<str[0]<<" "<<P[0]<<endl;
*/


/*
void update(int *P){
    *P=(*P)*2;

}
int main(){
    int i=10;
    update(&i);
    cout<< i << endl;
    */


//int main( ){
   
   /*
    int first=110;
    int *P= &first;
    int **q = &P;
    int second = (**q)++ +9;
    cout<< first <<" "<< second << endl;
    */


/*
int first=100;
int *P= &first;;
int **q =&P;
int second = ++(**q);
int *r= *q;
++(*r);
cout<< first << " "<<second <<endl;
*/


void increment(int **P){
    ++(**P);

}
int main(){
    int num=110;
    int *ptr =&num;
    increment(&ptr);
    cout<<num <<endl;
    return 0;
}

  

