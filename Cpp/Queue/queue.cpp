#include <iostream>
#include <queue>
#include <string>
#include <algorithm> // for algorithms used with other containers

/*
(1) Queue Initialization
(2) Adding elements
(3) Removing elements
(4) Accessing elements
(5) Size & Capacity
(6) Custom comparator (Priority Queue)
*/

int main(void)
{
    // #[01] Queue Initialization
    std::queue<int> q1;                     // Default constructor, an empty queue
    std::queue<int> q2(q1);                 // Copy constructor
    std::queue<int> q3 = std::queue<int>(); // Assigning an empty queue
    /*_______________________________________________________________________________________________________*/

    // #[02] Adding elements
    q1.push(10);    // Adds an element to the end of the queue
    q1.push(20);    // Adds another element
    q1.emplace(30); // Constructs and adds an element to the end of the queue
    /*_______________________________________________________________________________________________________*/

    // #[03] Removing elements
    q1.pop(); // Removes the front element
    /*_______________________________________________________________________________________________________*/

    // #[04] Accessing elements
    std::cout << "Front element: " << q1.front() << std::endl; // Accessing the front element
    std::cout << "Back element: " << q1.back() << std::endl;   // Accessing the back element
    /*_______________________________________________________________________________________________________*/

    // #[05] Size and Capacity
    std::cout << "Size: " << q1.size() << std::endl;                       // Returns the number of elements in the queue
    std::cout << "Is empty: " << (q1.empty() ? "Yes" : "No") << std::endl; // Checks if the queue is empty
    /*_______________________________________________________________________________________________________*/

    // #[06] Priority Queue
    std::priority_queue<int> pq1; // Default priority queue (max-heap)
    pq1.push(10);
    pq1.push(50);
    pq1.push(20);

    std::cout << "Top element (max): " << pq1.top() << std::endl; // Accessing the top element (largest element)

    std::priority_queue<int, std::vector<int>, std::greater<int>> pq2; // Min-heap
    pq2.push(10);
    pq2.push(50);
    pq2.push(20);

    std::cout << "Top element (min): " << pq2.top() << std::endl; // Accessing the top element (smallest element)

    // Custom comparator
    auto cmp = [](int left, int right)
    { return left > right; }; // Custom comparison (min-heap behavior)
    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq3(cmp);

    pq3.push(30);
    pq3.push(10);
    pq3.push(50);

    std::cout << "Top element (custom comparator): " << pq3.top() << std::endl; // Accessing the top element with custom comparator

    return 0;
}
