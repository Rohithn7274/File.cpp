#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool isPrime=true;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
        }
        if(isPrime==true){
            cout<<n<<" is a Prime Number"<<endl;
        }else{
            cout<<n<<" is not a Prime Number"<<endl;
        }
        return 0;
        }