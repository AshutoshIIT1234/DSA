#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d; // Declare a deque of integers
    d.push_back(1); // Add an element to the back of the deque
    d.push_front(2); // Add an element to the front of the deque
    cout << d.size() << endl; // Output the size of the deque
    cout << d.at(0) << endl; // Access the first element of the deque
    cout << d.front() << endl; // Access the first element of the deque
    cout << d.back() << endl; // Access the last element of the deque
    cout << d.empty() << endl; // Check if the deque is empty
    cout << d.max_size() << endl; // Output the maximum size of the deque
    cout << d.data() << endl; // Output the address of the first element of the deque
    cout<<d.pop_back()<<endl; // Remove the last element of the deque
    cout<<d.clear()<<endl; // Clear the deque
    cout<<d.begin()<<endl; // Output the address of the first element of the deque
    cout<<d.end()<<endl; // Output the address of the last element of the deque
    cout<<d.insert(d.begin(), 0)<<endl; // Insert an element at the beginning of the deque
    cout<<d.erase(d.begin())<<endl; // Remove the first element of the deque
    cout<<d.resize(5)<<endl; // Resize the deque to size 5
    cout<<d.reserve(10)<<endl; // Reserve space for 10 elements in the deque (not applicable for deque)
    cout<<d.shrink_to_fit()<<endl; // Shrink the deque to fit its size (not applicable for deque)
    cout<<d.assign(5, 0)<<endl; // Assign 5 elements with value 0 to the deque (not applicable for deque)
    cout<<d.swap(d)<<endl; // Swap the contents of two deques
    cout<<d.push_back(2)<<endl; // Add an element to the back of the deque
}