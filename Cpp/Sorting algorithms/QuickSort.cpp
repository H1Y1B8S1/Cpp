/*   ----- Quick Sort -------
Quick Sort is a highly efficient sorting algorithm and is based on partitioning of an array of data
into smaller arrays. A large array is partitioned into two arrays one of which holds values 
smaller than the specified value, say pivot, based on which the partition is made and another 
array holds values greater than the pivot value.

Complexities:

Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n^2)
Space Complexity: O(log n) for recursive calls
*/

#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, arr.size() - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";

    return 0;
}
