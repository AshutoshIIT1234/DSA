//Sumof all elements of array
#include <iostream>
#include<climits>
using namespace std;
int SumofArray(int num[], int n){
     int sum=0;
    for(int i = 0; i<n; i++) {
       
        sum=sum+num[i];
    }
    return sum;
}
int main() {

    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }
    cout<<"sum of all elements of array"<<SumofArray(num,size)<<endl;
    return 0;
}