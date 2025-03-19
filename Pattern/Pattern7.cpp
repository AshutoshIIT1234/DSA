#include <iostream>
using namespace std;
int main(){
    int  n;
    int i=1;

    
    cin>>n;
    while(i<=n){
        int j=1;
        int v=i;
        while(j<=i){
            
            cout<<v;
            j=j+1;
            v=v-1;
        }
       
        i =i+1;
        cout<<endl;
        
    }
}