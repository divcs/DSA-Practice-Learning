#include <iostream>  

void bubbleSort(int arr[], int n) {  
    for (int i = 0; i < n; ++i) {  
        for (int j = 0; j < n-i-1; ++j) {  
            if (arr[j] > arr[j+1]) {  
                std::swap(arr[j], arr[j+1]);  
            }  
        }  
    }  
}  

int main() {  
    int numbers[] = {4, 2, 7, 1, 5};  
    int n = sizeof(numbers) / sizeof(numbers[0]);  

    bubbleSort(numbers, n);  

    std::cout << "Sorted array: ";  
    for (int i = 0; i < n; ++i) {  
        std::cout << numbers[i] << " ";  
    }  
    std::cout << std::endl;  

    return 0;  
}


// #include <stdio.h>  

// void selectionSort(int arr[], int n) {  
//     for (int i = 0; i < n - 1; ++i) {  
//         int min_idx = i;  
//         for (int j = i + 1; j < n; ++j) {  
//             if (arr[j] < arr[min_idx]) {  
//                 min_idx = j;  
//             }  
//         }  
//         if (min_idx != i) {  
//             int temp = arr[i];  
//             arr[i] = arr[min_idx];  
//             arr[min_idx] = temp;  
//         }  
//     }  
// }  

// int main() {  
//     int numbers[] = {4, 2, 7, 1, 5};  
//     int n = sizeof(numbers) / sizeof(numbers[0]);  

//     selectionSort(numbers, n);  

//     printf("Sorted array: ");  
//     for (int i = 0; i < n; ++i) {  
//         printf("%d ", numbers[i]);  
//     }  
//     printf("\n");  

//     return 0;  
// }