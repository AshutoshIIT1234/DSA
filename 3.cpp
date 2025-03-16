//sum of n numbers
#include <iostream>
using namespace std;
int main(){
    int i=1;
    int a=0;
    int n;
    cin>>n;
    
    while(i<=n){
    
    
    i=i+1;
    a=i+a;
    }
    a=i+a;
    cout<<"sum of n numbers is: "<<a<<endl;
    return 0;
    
}