
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char operation;
    cout<< "value of a"<<endl;
    cin>>a;
    cout<< "value of b"<<endl;
    cin>>b;
    cout<< "Enter the operation"<<endl;
    cin>>operation;
    
    switch(operation){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
    }
        
          

    return 0;
}