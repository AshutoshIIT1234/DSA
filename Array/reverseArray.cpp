
#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        
    }
     cout<<endl;
}
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout << "Enter the size of array " << endl;
    cin >> size;
    int num[100];
    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }  
   
    reverse(num,size);   
    printArray(num,size);
    return 0;
}