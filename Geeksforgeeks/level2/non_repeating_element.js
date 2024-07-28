// JavaScript code for the above approach
function firstNonRepeating(array) {
  // Loop for checking each element
  for (let i = 0; i < array.length; i++) {
    let j
    // Checking if ith element is present in array
    for (j = 0; j < array.length; j++) if (i != j && arr[i] == arr[j]) break

    // If the loop runs through all indices of the array without finding a match (i.e., arr[i] is unique), it will complete without hitting the break statement.
    // At this point, j will have incremented all the way to array.length.
    if (j == array.length) return arr[i]
  }
  return -1
}

let arr = [9, 4, 9, 6, 7, 4]
console.log(firstNonRepeating(arr))

// using hasing

// Efficient javascript program to find first non-
// repeating element.

function firstNonRepeating(arr, n) {
  // Insert all array elements in hash
  // table

  const m = new Map()
  for (var i = 0; i < n; i++) {
    if (m.has(arr[i])) {
      m.set(arr[i], m.get(arr[i]) + 1)
    } else {
      m.set(arr[i], 1)
    }
  }
  // Traverse array again and return
  // first element with count 1.
  for (var i = 0; i < n; i++) if (m.get(arr[i]) == 1) return arr[i]
  return -1
}

// Driver code
var array = [9, 4, 9, 6, 7, 4]
var n = arr.length
document.write(firstNonRepeating(arr, n))
