#include <iostream>
using namespace std;
int main(){
    int i,j, n;
    i=1;
    j=1;
    cin>>n;
    while(i<=n){
       int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
}
