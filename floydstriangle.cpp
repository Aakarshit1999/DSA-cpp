#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no. of rows:";
    cin>>r;
    int count=1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}