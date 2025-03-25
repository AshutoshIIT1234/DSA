#nclude<iostream>
#include<array> 
using namespace std;
int main(){
    //array<int,5> a = {1,2,3,4,5}; //array of size 5
    array<int,5> a; //array of size 5
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    
    cout<<a.size()<<endl; //size of array
    cout<<a.at(0)<<endl; //accessing element at index 0
    cout<<a.front()<<endl; //first element of array
    cout<<a.back()<<endl; //last element of array
    
}
//array<int,5> a = {1,2,3,4,5}; //array of size 5