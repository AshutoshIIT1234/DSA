#include <iostream>
using namespace std;
void reverse(int arr[],int n){
  for(int i=0; i<=n;i=i+2){
      if(i+1<n){
          swap(arr[i],arr[i+1]);
          }
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