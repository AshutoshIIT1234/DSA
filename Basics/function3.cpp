// FInding nCr 
#include<iostream>
using namespace std;
int nCr(){
    int n,r;
    cin>>n>>r;
    int ans=1;
    for(int i=1;i<=r;i++){
        ans=ans*(n-i+1)/i;
    }
    return ans;
}
int main(){
    cout<<nCr();
    return 0;
}