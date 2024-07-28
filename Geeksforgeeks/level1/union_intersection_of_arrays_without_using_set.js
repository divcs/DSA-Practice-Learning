function countUnion(arr1, arr2) {
  let unionArray = []
  let unionCount = 0

  // Add elements of arr1 to the unionArray
  for (let i = 0; i < arr1.length; i++) {
    let isDuplicate = false

    // Check if arr1[i] is already in unionArray
    for (let j = 0; j < unionCount; j++) {
      if (arr1[i] === unionArray[j]) {
        isDuplicate = true
        break
      }
    }

    // If not a duplicate, add it to unionArray
    if (!isDuplicate) {
      unionArray[unionCount] = arr1[i]
      unionCount++
    }
  }

  // Add elements of arr2 to the unionArray
  for (let j = 0; j < arr2.length; j++) {
    let isDuplicate = false

    // Check if arr2[j] is already in unionArray
    for (let k = 0; k < unionCount; k++) {
      if (arr2[j] === unionArray[k]) {
        isDuplicate = true
        break
      }
    }

    // If not a duplicate, add it to unionArray
    if (!isDuplicate) {
      unionArray[unionCount] = arr2[j]
      unionCount++
    }
  }

  // The number of distinct elements in the union
  return unionCount
}

function countIntersection(arr1, arr2) {
  let intersectionArray = []
  let intersectionCount = 0

  // Loop through arr1
  for (let i = 0; i < arr1.length; i++) {
    // Check if current element exists in arr2
    for (let j = 0; j < arr2.length; j++) {
      if (arr1[i] === arr2[j]) {
        // Check if arr1[i] is already in intersectionArray
        let isDuplicate = false
        for (let k = 0; k < intersectionCount; k++) {
          if (arr1[i] === intersectionArray[k]) {
            isDuplicate = true
            break
          }
        }
        // If not a duplicate, add it to intersectionArray
        if (!isDuplicate) {
          intersectionArray[intersectionCount] = arr1[i]
          intersectionCount++
        }
        break // Break to avoid checking further in arr2 once a match is found
      }
    }
  }

  // Optional: Print the intersectionArray if needed
  console.log('Intersection Elements:', intersectionArray)

  // Return the count of distinct elements in the intersection
  return intersectionCount
}

// Example usage
const arr1 = [1, 2, 3, 4, 5]
const arr2 = [1, 2, 3]
const unionResult = countUnion(arr1, arr2)
console.log('Union Count:', unionResult) // Output: 5

// Calculate Intersection
const intersectionCount = countIntersection(arr1, arr2)
console.log('Intersection Count:', intersectionCount) // Output: 3
