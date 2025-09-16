#include<iostream>
using namespace std;
int main(){
    int i,n,oddsum=0;
    cout<<"Enter a number ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2!=0){
            oddsum+=i;
        }
    }
        cout<<oddsum<<endl;
    }