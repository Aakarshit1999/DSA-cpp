#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"no. of rows";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int s=2*r-2*i;
        for(int j=1;j<=s;j++){
        cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=r;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        int s=2*r-2*i;
        for(int j=s;j>=1;j--){
        cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}