#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number =";
    cin>>n;
    int sum=0;
    int original=n;
    while(n>0)
    {
        int lastdigit= n%10;
            sum= sum + (lastdigit*lastdigit*lastdigit); 
            n=n/10;
    }
    if(original==sum){
    cout << "Is an armstrong number" << endl;
    }

    else{
        cout<<"is not armstrong"<<endl;
    }
    return 0;
}