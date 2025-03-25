#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, int> m; // Declare a map of integers
    m[1] = 2; // Add a key-value pair to the map
    m[2] = 3; // Add another key-value pair to the map
    cout << m.size() << endl; // Output the size of the map
    cout << m[1] << endl; // Access the value associated with key 1
    cout << m.empty() << endl; // Check if the map is empty
    cout << m.max_size() << endl; // Output the maximum size of the map
    cout << m.find(1)->first << endl; // Find an element in the map and access its key
    cout<<m.erase(1)<<endl; // Remove an element from the map using its key
    cout<<m.clear()<<endl; // Clear the map
    cout<<m.swap(m)<<endl; // Swap the contents of two maps (not applicable for single instance)
    cout<<m.insert({2, 3})<<endl; // Add a key-value pair to the map using insert function
}