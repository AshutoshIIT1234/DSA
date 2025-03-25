#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s; // Declare a set of integers
    s.insert(1); // Add an element to the set
    s.insert(2); // Add another element to the set
    cout << s.size() << endl; // Output the size of the set
    cout << *s.begin() << endl; // Access the first element of the set
    cout << *s.rbegin() << endl; // Access the last element of the set
    cout << s.empty() << endl; // Check if the set is empty
    cout << s.max_size() << endl; // Output the maximum size of the set
    cout << *s.find(1) << endl; // Find an element in the set
    cout<<s.erase(1)<<endl; // Remove an element from the set
    cout<<s.clear()<<endl; // Clear the set
    cout<<s.swap(s)<<endl; // Swap the contents of two sets (not applicable for single instance)
    cout<<s.insert(2)<<endl; // Add an element to the set
}