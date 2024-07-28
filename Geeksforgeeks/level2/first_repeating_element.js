function firstRepeatingElement(arr) {
  const seen = new Map()
  let firstRepeatingIndex = -1

  for (let i = 0; i < arr.length; i++) {
    if (seen.has(arr[i])) {
      // Element found again, check if it's the first repeating
      if (
        firstRepeatingIndex === -1 ||
        seen.get(arr[i]) < firstRepeatingIndex
      ) {
        firstRepeatingIndex = seen.get(arr[i])
      }
    } else {
      // Store the index of the first occurrence
      seen.set(arr[i], i + 1) // storing the index as 1-based
    }
  }

  return firstRepeatingIndex === -1 ? -1 : firstRepeatingIndex
}

// Example usage:
console.log(firstRepeatingElement([1, 5, 3, 4, 3, 5, 6])) // Output: 2
console.log(firstRepeatingElement([1, 2, 3, 4])) // Output: -1
