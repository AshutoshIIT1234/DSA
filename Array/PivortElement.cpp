#include<iostream>
using namespace std; 
int pivot(int arr[], int size) {  
    int start=0;
    int end=0;
    end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
    
}
int main(){
    int arr[10]={7,8,9,10,1,2,3,4,5,6};
    int index=pivot(arr,10);
    cout<<"Pivot is at index "<<index<<endl;
}