#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    queue<int> q; // Declare a queue of integers
    q.push(1); // Add an element to the back of the queue
    q.push(2); // Add another element to the back of the queue
    cout << q.size() << endl; // Output the size of the queue
    cout << q.front() << endl; // Access the front element of the queue
    cout << q.back() << endl; // Access the last element of the queue
    cout << q.empty() << endl; // Check if the queue is empty
    cout << q.pop() << endl; // Remove the front element of the queue (not applicable for queue)
    cout << q.clear() << endl; // Clear the queue (not applicable for queue)
    cout << q.swap(q) << endl; // Swap the contents of two queues (not applicable for single instance)
    cout << q.push(2) << endl; // Add an element to the back of the queue
    cout << q.pop() << endl; // Remove the front element of the queue (not applicable for queue)
}