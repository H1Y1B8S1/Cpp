#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> // make_heap, push_heap, pop_heap, sort_heap

/*
(1) Heap Initialization
(2) Adding elements
(3) Removing elements
(4) Accessing elements
(5) Custom comparator
(6) Heap operations using algorithms (make_heap, push_heap, pop_heap, sort_heap)
*/

int main(void)
{
    // #[01] Heap Initialization with priority_queue
    std::priority_queue<int> maxHeap;                                      // Max-heap (default)
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap; // Min-heap

    // #[02] Adding elements
    maxHeap.push(10); // Adds element to the heap
    maxHeap.push(30);
    maxHeap.push(20);

    minHeap.push(10); // Adds element to the min-heap
    minHeap.push(30);
    minHeap.push(20);
    /*_______________________________________________________________________________________________________*/

    // #[03] Removing elements
    maxHeap.pop(); // Removes the top (largest) element
    minHeap.pop(); // Removes the top (smallest) element
    /*_______________________________________________________________________________________________________*/

    // #[04] Accessing elements
    std::cout << "Top element (max-heap): " << maxHeap.top() << std::endl; // Accessing the largest element
    std::cout << "Top element (min-heap): " << minHeap.top() << std::endl; // Accessing the smallest element
    /*_______________________________________________________________________________________________________*/

    // #[05] Custom Comparator in priority_queue
    auto cmp = [](int left, int right)
    { return left > right; };
    std::priority_queue<int, std::vector<int>, decltype(cmp)> customHeap(cmp);

    customHeap.push(50);
    customHeap.push(20);
    customHeap.push(30);

    std::cout << "Top element (custom heap): " << customHeap.top() << std::endl; // Accessing the top element with custom comparator
    /*_______________________________________________________________________________________________________*/

    // #[06] Heap Operations using Algorithms
    std::vector<int> heap = {10, 20, 30, 5, 1};

    std::make_heap(heap.begin(), heap.end()); // Converts vector into a heap (max-heap by default)
    std::cout << "Heap after make_heap: ";
    for (int i : heap)
        std::cout << i << " ";
    std::cout << std::endl;

    heap.push_back(50);                       // Adding an element to the heap
    std::push_heap(heap.begin(), heap.end()); // Reorders the heap after adding the new element
    std::cout << "Heap after push_heap: ";
    for (int i : heap)
        std::cout << i << " ";
    std::cout << std::endl;

    std::pop_heap(heap.begin(), heap.end()); // Moves the largest element to the end
    std::cout << "Heap after pop_heap: ";
    for (int i : heap)
        std::cout << i << " ";
    std::cout << std::endl;
    heap.pop_back(); // Removes the last element, which is the largest

    std::cout << "Heap after removing top element: ";
    for (int i : heap)
        std::cout << i << " ";
    std::cout << std::endl;

    std::sort_heap(heap.begin(), heap.end()); // Sorts the elements in ascending order (heap is destroyed)
    std::cout << "Heap after sort_heap: ";
    for (int i : heap)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
