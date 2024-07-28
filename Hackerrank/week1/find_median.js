function findMedian(arr) {
  // Sort the array
  arr.sort((a, b) => a - b) // Sort in ascending order

  const n = arr.length

  // Check if the number of elements is odd
  if (n % 2 === 1) {
    // Return the middle element
    return arr[Math.floor(n / 2)]
  } else {
    // Return the average of the two middle elements
    const mid1 = arr[n / 2 - 1]
    const mid2 = arr[n / 2]
    return Math.floor((mid1 + mid2) / 2) // Return as an integer
  }
}

const arr = [5, 3, 1, 2, 4, 7]
const res = findMedian(arr)
console.log(res)
