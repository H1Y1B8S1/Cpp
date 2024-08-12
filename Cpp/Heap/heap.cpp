#include <iostream>
#include <vector>
#include <algorithm> // make_heap, push_heap, pop_heap, sort_heap

/*
(1) Heap Initialization
(2) Adding elements
(3) Removing elements
(4) Accessing elements
(5) Custom comparator
(6) Heap sorting
*/

int main(void)
{
    // #[01] Heap Initialization
    std::vector<int> heap = {10, 20, 30, 5, 1};
    std::make_heap(heap.begin(), heap.end()); // Converts the vector into a heap (max-heap by default)
    
    std::cout << "Heap after make_heap: ";
    for (int i : heap) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[02] Adding elements
    heap.push_back(50); // Add new element to the end
    std::push_heap(heap.begin(), heap.end()); // Reorder the heap after the new element is added
    
    std::cout << "Heap after push_heap: ";
    for (int i : heap) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[03] Removing elements
    std::pop_heap(heap.begin(), heap.end()); // Move the largest element to the end of the vector
    int largest = heap.back(); // The largest element is now at the back
    heap.pop_back(); // Remove the largest element
    
    std::cout << "Largest element removed: " << largest << std::endl;
    std::cout << "Heap after pop_heap: ";
    for (int i : heap) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[04] Accessing elements
    std::cout << "Current top element (max): " << heap.front() << std::endl; // Accessing the top element (largest)
    /*_______________________________________________________________________________________________________*/

    // #[05] Custom Comparator for Min-Heap
    auto minHeap = heap;
    std::make_heap(minHeap.begin(), minHeap.end(), std::greater<int>()); // Converts the vector into a min-heap
    
    std::cout << "Min-heap after make_heap with custom comparator: ";
    for (int i : minHeap) std::cout << i << " ";
    std::cout << std::endl;
    /*_______________________________________________________________________________________________________*/

    // #[06] Heap Sorting
    std::sort_heap(heap.begin(), heap.end()); // Sorts the heap into ascending order (destroys heap property)
    
    std::cout << "Heap after sort_heap: ";
    for (int i : heap) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
