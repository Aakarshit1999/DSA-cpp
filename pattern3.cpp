#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter no. of rows:";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            if(i<10){
                cout<<i<<"  ";
            }
            else{
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}