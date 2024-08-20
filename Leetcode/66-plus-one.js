/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
  // Start from the last digit
  for (let i = digits.length - 1; i >= 0; i--) {
    // If the digit is less than 9, we can just increment it and return
    if (digits[i] < 9) {
      digits[i]++
      return digits
    }
    // Set the current digit to 0 and carry over to the next digit
    digits[i] = 0
  }

  // If we exit the loop, that means we had a carry out of the most significant digit
  // We need to add a new digit at the front
  return [1, ...digits]
}
