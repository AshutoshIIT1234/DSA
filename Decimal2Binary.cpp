#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int ans=0;
    while(n!=0){
        
        int bit= n & 1;
        ans=(bit * i)+ans;
        n =n >> 1 ;
        i *= 10;
        

    }
    cout<<ans;
}