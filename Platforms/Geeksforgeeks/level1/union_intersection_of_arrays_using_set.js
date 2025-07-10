function countUnion(arr1, arr2) {
  // Combine both arrays
  const combinedArray = arr1.concat(arr2)

  // Use a Set to remove duplicates
  const unionSet = new Set(combinedArray)

  // Return the size of the Set (number of distinct elements)
  return unionSet.size
}

function countIntersection(arr1, arr2) {
  // Create a Set from the second array for efficient lookups
  const setB = new Set(arr2)

  // Filter the first array to include only elements that are in the second array
  const intersection = arr1.filter((element) => setB.has(element))

  // Use a Set to remove duplicates from the intersection
  const uniqueIntersectionSet = new Set(intersection)

  // Return the size of the Set (number of distinct elements in the intersection)
  return uniqueIntersectionSet.size
}

// Example usage
const arr1 = [1, 2, 3, 4, 5]
const arr2 = [1, 2, 3]

const unionResult = countUnion(arr1, arr2)
console.log(unionResult) // Output: 5

// This will output the number of unique elements that are in both arrays
const intersectionResult = countIntersection(arr1, arr2)
console.log(intersectionResult) // Output: 3
