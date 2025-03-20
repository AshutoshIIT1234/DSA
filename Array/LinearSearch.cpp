#include    <iostream>
using namespace std;
int search(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i]==element){
            return element;
        }
        return -1;
    }
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
    int searchElement;
    cout << "Enter the element to be searched " << endl;
    cin >> searchElement;
    if (search(num, size,searchElement ) == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found"<<endl;
    }
    return 0;

}