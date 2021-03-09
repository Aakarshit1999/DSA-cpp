#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter no. of rows and columns";
    cin>>r>>c;
    int i,j;
    for(i=1;i<=c;i++){
        for(j=1;j<=r;j++){
          if(i==1 || i==c || j==1 || j==r){
              cout<<"* ";
          }
          else{
              cout<<"  ";
          }
        }
        cout<<endl;
    }
}