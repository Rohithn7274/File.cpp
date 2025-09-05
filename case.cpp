#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin >>ch;
    if(ch>=65&&ch<=90){
        cout<<"The character is Uppercase"<<endl;
    } else {
        cout<<"The character is Lowercase"<<endl;
    }
    return 0;
}