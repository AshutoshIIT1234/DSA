#include    <stack>
#include    <iostream>      
using namespace std;
int main(){
    stack<int> s; // Declare a stack of integers
    s.push(1); // Add an element to the top of the stack
    s.push(2); // Add another element to the top of the stack
    cout << s.size() << endl; // Output the size of the stack
    cout << s.top() << endl; // Access the top element of the stack
    cout << s.empty() << endl; // Check if the stack is empty
    cout << s.pop() << endl; // Remove the top element of the stack (not applicable for stack)
    cout << s.clear() << endl; // Clear the stack (not applicable for stack)
    cout << s.swap(s) << endl; // Swap the contents of two stacks (not applicable for single instance)
    cout << s.push(2) << endl; // Add an element to the top of the stack
}