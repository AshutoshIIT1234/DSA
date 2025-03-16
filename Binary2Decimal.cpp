#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        
        int bit= n %10;
        ans = bit * (1 << i) + ans;
        n = n / 10;
        i++;
        

    }
    cout<<ans;
}