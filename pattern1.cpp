#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    for(int i=0;i<n;i++){
        char ch;
        cout<<"Enter the character for row: ";
        cin>>ch;
        for(int j=0;j<m;j++){
            cout<< ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}