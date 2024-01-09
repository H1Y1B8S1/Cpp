#include "AdvancedArray.h"

// Constructor: Initializes the AdvancedArray with a default or specified initial capacity.
AdvancedArray::AdvancedArray(size_t initialCapacity) : capacity(initialCapacity), size(0) {
    arr = new int[capacity];
}

// Destructor: Deallocates the dynamically allocated memory for the array.
AdvancedArray::~AdvancedArray() {
    delete[] arr;
}

// Adds an element to the end of the array.
void AdvancedArray::push_back(int value) {
    if (size >= capacity) {
        capacity *= 2;
        int* temp = new int[capacity];
        for (size_t i = 0; i < size; ++i) {
            temp[i] = arr[i];
        }
        delete[] arr; // Deallocate old memory
        arr = temp;
    }
    arr[size++] = value;
}

// Removes the last element from the array.
void AdvancedArray::pop_back() {
    if (size > 0) {
        --size;
    }
}

// Inserts an element at a specified index in the array.
void AdvancedArray::insert(size_t index, int value) {
    if (index <= size) {
        if (size >= capacity) {
            capacity *= 2;
            int* temp = new int[capacity];
            for (size_t i = 0; i < index; ++i) {
                temp[i] = arr[i];
            }
            temp[index] = value;
            for (size_t i = index; i < size; ++i) {
                temp[i + 1] = arr[i];
            }
            delete[] arr;
            arr = temp;
            ++size;
        }
        else {
            for (size_t i = size; i > index; --i) {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
            ++size;
        }
    }
}

// Deletes an element at a specified index from the array.
void AdvancedArray::erase(size_t index) {
    if (index < size) {
        for (size_t i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        --size;
    }
}

// Accesses the element at a specified index in the array.
int& AdvancedArray::at(size_t index) {
    if (index < size) {
        return arr[index];
    }
    throw std::out_of_range("Index out of range");
}

// Accesses the first element of the array.
int& AdvancedArray::front() {
    if (size > 0) {
        return arr[0];
    }
    throw std::out_of_range("Array is empty");
}

// Accesses the last element of the array.
int& AdvancedArray::back() {
    if (size > 0) {
        return arr[size - 1];
    }
    throw std::out_of_range("Array is empty");
}

// Checks if the array is empty.
bool AdvancedArray::empty() const {
    return size == 0;
}

// Gets the current size of the array.
size_t AdvancedArray::getSize() const {
    return size;
}

// Gets the current capacity of the array.
size_t AdvancedArray::getCapacity() const {
    return capacity;
}

// Clears the array, setting its size to zero.
void AdvancedArray::clear() {
    size = 0;
}

// Finds the index of the first occurrence of a given value in the array.
size_t AdvancedArray::find(int value) const {
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i;
        }
    }
    return size; // Indicates not found
}

// Displays all elements in the array.
void AdvancedArray::display() const {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}

void AdvancedArray::print() const
{
    AdvancedArray arr(5);

    // Add elements to the array
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.display(); // Should display: 10 20 30 40 50

    // Remove the last element from the array
    arr.pop_back();
    arr.display(); // Should display: 10 20 30 40

    // Insert an element at index 2
    arr.insert(2, 99);
    arr.display(); // Should display: 10 20 99 30 40

    // Erase the element at index 1
    arr.erase(1);
    arr.display(); // Should display: 10 99 30 40

    // Access elements using at(), front(), and back()
    std::cout << "Element at index 2: " << arr.at(2) << '\n'; // Should display: 30
    std::cout << "First element: " << arr.front() << '\n'; // Should display: 10
    std::cout << "Last element: " << arr.back() << '\n'; // Should display: 40

    // Check if the array is empty and get its size and capacity
    std::cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << '\n'; // Should display: No
    std::cout << "Array size: " << arr.getSize() << '\n'; // Should display: 4
    std::cout << "Array capacity: " << arr.getCapacity() << '\n'; // Should display: 8

    // Find the index of value 99 in the array
    std::cout << "Index of value 99: " << arr.find(99) << '\n'; // Should display: 1

    // Clear the array and display its content
    arr.clear();
    arr.display(); // Should display nothing

}


