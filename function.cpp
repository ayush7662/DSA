/*#include<iostream>
using namespace std;
int main(){

    int a,b;
    cin >>a >> b;
    int ans=1;

    for(int i=1;i<=b;i++){

        ans=ans*a;
    }
    cout<<"answer is"<< ans <<endl;
    return 0;
}
*/


 /*#include<iostream>
using namespace std;

int power(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;

}
int main(){
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<"answer is"<<answer<<endl;
    return 0;
}
*/


 /*#include<iostream>
using namespace std;
int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main(){

    int ans=power();
    cout<<"answer is"<<ans<<endl;
    return 0;
}
*/



 /*#include<iostream>
using namespace std;
 bool isEven(int a){
    //odd
    if(a&1){
        return 0;

    }
    else{
        return 1;
    }
 }
 int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"Number is Even"<<endl;
        
    }
    else{
        cout<<"Number is odd"<<endl;
    }
    return 0;
 }
 */


//finding factorial
/*#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
           fact=fact*i;


    }
    return fact;
}
int ncr(int n,int r){
    int num=factorial(n); // formula of numerator
    int denom=factorial(r)*factorial(n-r);

    return num/denom;

}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"answer is"<<ncr(n,r)<<endl;
     return 0;

}
*/


 /*#include<iostream>
using namespace std;

//function signature
void printcounting(int n){
    //function body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";

    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;

    //function call
    
    printcounting(n);
    return 0;
}
*/

//prime number
/*#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"is a prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
}

*/


//pass by value
#include<iostream>
using namespace std;
 void dummy(int n){
    n++;
    cout<<"n is"<<endl;
 }
 int main(){
    int n;
    cin>>n;
    cout<<"number n is:"<<n<<endl;
    return 0;
 }



