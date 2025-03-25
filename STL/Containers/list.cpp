#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l; // Declare a list of integers
    l.push_back(1); // Add an element to the back of the list
    l.push_front(2); // Add an element to the front of the list
    cout << l.size() << endl; // Output the size of the list
    cout << l.front() << endl; // Access the first element of the list
    cout << l.back() << endl; // Access the last element of the list
    cout << l.empty() << endl; // Check if the list is empty
    cout << l.max_size() << endl; // Output the maximum size of the list
    cout << l.data() << endl; // Output the address of the first element of the list (not applicable for list)
    l.pop_back(); // Remove the last element of the list
    l.clear(); // Clear the list
    cout<<l.begin()<<endl; // Output the address of the first element of the list (not applicable for list)
    cout<<l.end()<<endl; // Output the address of the last element of the list (not applicable for list)
    l.insert(l.begin(), 0); // Insert an element at the beginning of the list
    l.erase(l.begin()); // Remove the first element of the list
    l.resize(5); // Resize the list to size 5 (not applicable for list)
    cout<<l.size()<<endl; // Output size after resizing (not applicable for list)
    cout<<l.swap(l)<<endl; // Swap the contents of two lists (not applicable for single instance)
    l.push_back(2); // Add an element to the back of the list
}