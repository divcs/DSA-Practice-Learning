/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  if (nums.length === 0) {
    return 0 // No elements to process
  }

  let k = 1 // Start counting unique elements from the first element

  // Iterate through the array starting from the second element
  for (let i = 1; i < nums.length; i++) {
    // If the current element is different from the last unique element
    if (nums[i] !== nums[k - 1]) {
      nums[k] = nums[i] // Assign the unique value to the position k
      k++ // Move to the next position for the next unique element
    }
  }

  return k // k is the count of unique elements
}

// Example usage:
let nums1 = [1, 1, 2]
let k1 = removeDuplicates(nums1)
console.log(k1, nums1.slice(0, k1)) // Output: 2 [1, 2]

let nums2 = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
let k2 = removeDuplicates(nums2)
console.log(k2, nums2.slice(0, k2)) // Output: 5 [0, 1, 2, 3, 4]
