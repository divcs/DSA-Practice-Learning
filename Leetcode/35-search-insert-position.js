/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function (nums, target) {
  let left = 0
  let right = nums.length - 1

  while (left <= right) {
    const mid = Math.floor((left + right) / 2)

    if (nums[mid] === target) {
      return mid // Target found, return index
    } else if (nums[mid] < target) {
      left = mid + 1 // Target is in the right half
    } else {
      right = mid - 1 // Target is in the left half
    }
  }

  // If we reach here, the target is not found, left is the insert position
  return left
}

// Example usage:
console.log(searchInsert([1, 3, 5, 6], 5)) // Output: 2
console.log(searchInsert([1, 3, 5, 6], 2)) // Output: 1
console.log(searchInsert([1, 3, 5, 6], 7)) // Output: 4
