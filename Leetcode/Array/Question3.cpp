int findUnique(int *arr, int size)
{
  
    int unique=0;
    
  for(int i=0; i<=size;i++){
      unique= arr[i]^unique;
      }
     return unique;

  
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
    
    cout<<findUnique(num,size)<<endl;
    
    return 0;
}