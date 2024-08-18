/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
  let k = 0 // Pointer for the position of valid elements

  // Iterate through the array
  for (let i = 0; i < nums.length; i++) {
    // If current element is not equal to val
    if (nums[i] !== val) {
      // Move the valid element to the k index
      nums[k] = nums[i]
      k++ // Increment k
    }
  }

  return k // Return the count of valid elements
}
