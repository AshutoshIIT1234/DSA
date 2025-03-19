//finding character type
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a character: ";
    char a;
    cin>>a;
     
    int b=a;
 
    if(b>96 && b <123){
        cout<<"character is Lowercase"<<endl;
    }
    else if(b>64 && b<91){
        cout<<"character is Uppercase"<<endl;
    }
    else if(b>47 && b<58){
        cout<<"character is Numeric"<<endl;
    }
   
    return 0;
}
