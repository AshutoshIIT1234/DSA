#include <iostream>
using namespace std;
int main(){
    int  n;
    int i=1;

    
    cin>>n;
    while(i<=n){
        int j=1;
       
        while(j<=i){
            cout<<i;
            j=j+1;
        }
       
        i =i+1;
        cout<<endl;
        
    }
}