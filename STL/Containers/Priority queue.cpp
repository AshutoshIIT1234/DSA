#include<iostream>
#include<queue>
#include<deque>
#include<list>
#include<stack>

using namespace std;
int main(){
    priority_queue<int> pq; // Declare a max heap priority queue of integers
    pq.push(1); // Add an element to the priority queue
    pq.push(2); // Add another element to the priority queue
    cout << pq.size() << endl; // Output the size of the priority queue
    cout << pq.top() << endl; // Access the top element of the priority queue
    cout << pq.empty() << endl; // Check if the priority queue is empty
    pq.pop(); // Remove the top element of the priority queue
    cout << pq.size() << endl; // Output the size of the priority queue after popping an element

    return 0;
}
// #include <iostream>