//Sum of n even numbers

#include <iostream>
using namespace std;


int main()
{   int i,n;
    cin>>n;
    int sum =0;
    while(i<n){
       
        i=i+1;
         if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<"sum of n even Numbers:"<<sum<<endl;
    

    return 0;
}