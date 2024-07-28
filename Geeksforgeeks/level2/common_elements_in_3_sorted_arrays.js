// function common_element(array1, array2, array3) {
//   array1 = array1.sort()
//   array2 = array2.sort()
//   array3 = array3.sort()

//   let common_element_array = []
//   let common = false

//   for (let i = 0; i < array1.length; i++) {
//     for (let c = 0; c < common.length; c++) {
//       if (common[c] === array1[i]) {
//         // there's a common element in common_element_array and array1
//         common = true
//         break
//       }
//     }
//     if (!common) {
//       common_element_array.push(array1[i])
//     }

//     for (let j = 0; j < array2.length; j++) {
//       for (let c = 0; c < common.length; c++) {
//         if (common[c] === array2[j]) {
//           // there's a common element in common_element_array and array1
//           common = true
//           break
//         }
//       }
//       if (!common) {
//         common_element_array.push(array2[j])
//       }
//     }

//     for (let k = 0; k < array3.length; k++) {
//       for (let c = 0; c < common.length; c++) {
//         if (common[c] === array3[k]) {
//           // there's a common element in common_element_array and array1
//           common = true
//           break
//         }
//       }
//       if (!common) {
//         common_element_array.push(array3[k])
//       }
//     }
//   }

//   let sorted_common_element_array = common_element_array.sort()
//   return sorted_common_element_array
// }

// const array1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// const array2 = [2, 4, 6, 8, 10]
// const array3 = [4, 8, 10]

// const result = common_element(array1, array2, array3)
// console.log(result)

function common_element(array1, array2, array3) {
  // Create a Set to store unique common elements
  let common_element_set = new Set()

  // Traverse through the first array
  for (let i = 0; i < array1.length; i++) {
    let element = array1[i]
    // Check if this element exists in both array2 and array3
    if (array2.includes(element) && array3.includes(element)) {
      // Add to the Set (automatically handles duplicates)
      common_element_set.add(element)
    }
  }

  if (common_element_set.size == 0) return -1
  // Convert the Set back to an array and sort it before returning
  return Array.from(common_element_set).sort((a, b) => a - b)
}

const array1 = [1, 1, 2, 2]
const array2 = [3, 4, 5, 3]
const array3 = [7, 8, 8, 9]

const result = common_element(array1, array2, array3)
console.log(result) // Expected output: [1, 2]
