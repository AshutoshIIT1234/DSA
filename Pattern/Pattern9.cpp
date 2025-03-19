
#include<iostream>
using namespace std;

int main(){
    int i,n,m;
    cin>>n;
    i=65;
    m=i+n;
    while(i<=m){
        int j=1;
       while(j<=m){
        
           cout<<(char)i;
           j=j+n;
         }
        cout<<endl;
        i=i+1;
    }
}