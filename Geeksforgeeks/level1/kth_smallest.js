// # def kth_smallest(arr, k, l, r):
// #     pivot = arr[r]
// #     i = l

// #     for j in range(l, r):
// #         if arr[j] < pivot:
// #             arr[i], arr[j] = arr[j], arr[i]
// #             i += 1

// #     arr[i], arr[r] = arr[r], arr[i]

// #     if i - l == k - 1:
// #         return arr[i]
// #     elif i - l > k - 1:
// #         return kth_smallest(arr, k, l, i - 1)
// #     else:
// #         return kth_smallest(arr, k - i + l - 1, i + 1, r)

// # arr = [7, 10, 4, 3, 20, 15]
// # k = 3
// # n = len(arr)
// # l = 0
// # r = n - 1

// # kth_smallest_element = kth_smallest(arr, k, l, r)

// # print(f"The {k}th smallest element is: {kth_smallest_element}")

// # def kth_smallest(array,k):
// #     array.sort()
// #     return k-1

// # numbers=[10,20,80,30,22,88,40]
// # print(kth_smallest(numbers,3))

function kth_largest(array, k) {
  array.sort((a, b) => b - a)
  return array[k - 1]
  //   console.log(k)
}

function kth_smallest(array, k) {
  array.sort()
  return array[k - 1]
}

numbers = [10, 40, 20, 30, 60, 77, 90]
// element = kth_smallest(numbers, 7)
element = kth_largest(numbers, 2)
console.log(element)
