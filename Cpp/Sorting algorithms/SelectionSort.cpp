/*         ------- Selection Sort -------
Selection Sort is an in-place comparison sorting algorithm.
It divides the input list into two parts:
the sublist of items already sorted,
which is built up from left to right at the front (left) of the list,
and the sublist of items remaining to be sorted that occupy the rest of the list.
Initially, the sorted sublist is empty and the unsorted sublist is the entire input list.


Complexities:

Best Case: O(n^2)
Average Case: O(n^2)
Worst Case: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

void selectionSort(std::vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        std::swap(arr[min_idx], arr[i]);

        for (int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << " ";
        std::cout << "\n";
    }
}

int main()
{
    std::vector<int> arr = {64, 25, 12, 22, 0, 11};
    selectionSort(arr);

    std::cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";

    return 0;
}
