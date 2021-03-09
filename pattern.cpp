#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int i,j;
    for(i=row;i>=1;i--){
        for (j=1;j<=i;j++)
        {
          cout<<"*";
        }
        cout << endl;
    }
}
