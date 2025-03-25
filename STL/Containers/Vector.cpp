#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> v; // Declare a vector of integers
    v.push_back(1); 
    cout << v.size() << endl; // Output the size of the vector
    cout << v.capacity() << endl; // Output the capacity of the vector
    cout << v.at(0) << endl; // Access the first element of the vector
    cout << v.front() << endl; // Access the first element of the vector
    cout << v.back() << endl; // Access the last element of the vector
    cout << v.empty() << endl; // Check if the vector is empty
    cout << v.max_size() << endl; // Output the maximum size of the vector
    cout << v.data() << endl; // Output the address of the first element of the vector
    cout<<v.pop_back()<<endl; // Remove the last element of the vector
    cout<<v.clear()<<endl; // Clear the vector
    cout<<v.begin()<<endl; // Output the address of the first element of the vector
    cout<<v.end()<<endl; // Output the address of the last element of the vector
    cout<<v.insert(v.begin(), 0)<<endl; // Insert an element at the beginning of the vector
    cout<<v.erase(v.begin())<<endl; // Remove the first element of the vector
    cout<<v.resize(5)<<endl; // Resize the vector to size 5
    cout<<v.reserve(10)<<endl; // Reserve space for 10 elements in the vector
    cout<<v.shrink_to_fit()<<endl; // Shrink the vector to fit its size
    cout<<v.assign(5, 0)<<endl; // Assign 5 elements with value 0 to the vector
    cout<<v.swap(v)<<endl; // Swap the contents of two vectors
    
    v.push_back(2);
    v.push_back(3);
}