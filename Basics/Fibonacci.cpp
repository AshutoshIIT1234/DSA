#include<iostream>
using namespace std;
int main(){
    int i,n,sum,a,b;
    cin>>n;
    i=1;
    a=0;
    b=1;
    cout << a << " ";
    cout << b << " ";
   for (int i = 1; i <= n; i++)
   {
        
        sum =a+b;
         cout << sum << " ";
         a=b;
         b=sum;
       
   }
    
   
    return 0;
}