/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  // Mapping of Roman numerals to integers
  const romanToIntMap = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  }

  let total = 0
  const n = s.length

  for (let i = 0; i < n; i++) {
    // Check if the current value is less than the next value
    if (i < n - 1 && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
      total -= romanToIntMap[s[i]] // Subtract if it's a subtractive combination
    } else {
      total += romanToIntMap[s[i]] // Add otherwise
    }
  }

  return total
}

// Example usage:
console.log(romanToInt('III')) // Output: 3
console.log(romanToInt('LVIII')) // Output: 58
console.log(romanToInt('MCMXCIV')) // Output: 1994

// 2 MEthod

/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  const romanToIntMap = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  }

  let total = 0

  // Loop through the string
  for (let i = 0; i < s.length; i++) {
    // Check for the subtractive pairs
    if (i > 0 && romanToIntMap[s[i]] > romanToIntMap[s[i - 1]]) {
      // We have been subtracting the previous value, so adjust
      total += romanToIntMap[s[i]] - 2 * romanToIntMap[s[i - 1]]
    } else {
      total += romanToIntMap[s[i]]
    }
  }

  return total
}

// Example usage:
console.log(romanToInt('III')) // Output: 3
console.log(romanToInt('LVIII')) // Output: 58
console.log(romanToInt('MCMXCIV')) // Output: 1994

// same

/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  const romanToIntMap = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  }

  let total = 0
  let prevValue = 0 // Track the value of the previous numeral

  // Loop through the characters in the string
  for (let char of s) {
    const currentValue = romanToIntMap[char] // Get the value of the current numeral

    // Check for subtractive conditions
    if (currentValue > prevValue) {
      total += currentValue - 2 * prevValue // Adjust total
    } else {
      total += currentValue // Normal addition
    }

    prevValue = currentValue // Update the previous value for the next iteration
  }

  return total
}

// Example usage:
console.log(romanToInt('III')) // Output: 3
console.log(romanToInt('LVIII')) // Output: 58
console.log(romanToInt('MCMXCIV')) // Output: 1994
