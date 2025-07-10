## Binary Search Use Cases

### Here are 10 different problem use cases where binary search can be applied:

1. Finding an Element in a Sorted Array: Given a sorted array of integers, find the index of a target element or determine if it exists in the array.

2. Finding the First or Last Occurrence of an Element: Given a sorted array with possible duplicate elements, find the index of the first or last occurrence of a target element.

3. Finding the Smallest Element in a Rotated Sorted Array: Given a rotated sorted array, find the smallest element in the array.

4. Searching in a 2D Matrix: Given a 2D matrix with sorted rows and columns, determine if a target element exists in the matrix.

5. Searching in a Bitonic Array: Given a bitonic array, which is first sorted in ascending order and then in descending order, find the index of a target element.

6. Searching in a Nearly Sorted Array: Given an array that is nearly sorted in ascending order, find the index of a target element.

7. Finding the Missing Element in a Sorted Array: Given a sorted array of consecutive integers with one missing element, find the missing element.

8. Finding the Peak Element: Given an array that represents a mountain, where elements increase until a peak is reached and then decrease, find the index of the peak element.

9. Finding the Ceiling or Floor of a Number: Given a sorted array and a target number, find the smallest element greater than or equal to the target (ceiling) or the largest element smaller than or equal to the target (floor).

10. Searching in a Sorted and Rotated Array: Given a sorted and rotated array, find the index of a target element.

## Example:

### Problem: Given a sorted array of integers, find the index of a target element. If the target element is not found in the array, return -1.

```cpp
#include <iostream>
#include <vector>
// Binary search function
int binarySearch(const std::vector<int>& arr, int target) {
   int left = 0;
   int right = arr.size() - 1;
   while (left <= right) {
       int mid = left + (right - left) / 2;
       if (arr[mid] == target) {
           return mid; // Element found at index mid
       } else if (arr[mid] < target) {
           left = mid + 1; // Search in the right half
       } else {
           right = mid - 1; // Search in the left half
       }
   }
   return -1; // Element not found
}

int main() {
   // Sorted array for binary search
   std::vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
   int target;
   std::cout << "Enter the target element: ";
   std::cin >> target;
   int index = binarySearch(arr, target);
   if (index != -1) {
       std::cout << "Element found at index " << index << std::endl;
   } else {
       std::cout << "Element not found in the array" << std::endl;
   }
   return 0;
}

```
