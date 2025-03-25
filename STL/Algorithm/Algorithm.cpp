#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"Finding 6 in vector: "<<binary_search(v.begin(),v.end(),6)<<endl; //returns 0
    cout<<"upper bound of vector"<<lower
}