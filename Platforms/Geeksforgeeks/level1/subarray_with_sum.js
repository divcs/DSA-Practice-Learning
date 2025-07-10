// function subarraySum(array, sum) {
//   let subArray = []
//   for (let i = 0; i < array.length; i++) {
//     // case 1: when elements are smaller than sum
//     do {
//       let summation = array[i] + array[i + 1]
//       if (summation === sum) {
//         // pushing the indices of continuous elements whose summation is equal to sum
//         indicesArray = subArray.push(i)
//         return indicesArray
//         // console.log(indicesArray)
//       }
//     } while (array[i] < sum)

//     // case 2: when element is greater than sum, then leave that element and continue finding the sum of smaller elements
//     if (array[i] > sum) {
//       continue
//     }

//     if (array[i] === sum) {
//       console.log('Element at index:' + i)
//     }
//   }
// }

// const inputArray = [5, 8, 2, 10, 3, 6]
// const sum = 6

// const resultArray = subarray(inputArray, sum)
// console.log(resultArray)

function subarraySum(array, sum) {
  for (let start = 0; start < array.length; start++) {
    let currentSum = 0

    for (let end = start; end < array.length; end++) {
      currentSum += array[end]

      if (currentSum === sum) {
        return array.slice(start, end + 1) // return the subarray with the sum
      }
    }
  }

  return null // return null if subarray with sum is not found
}

const inputArray = [5, 8, 2, 10, 3, 6]
const sum = 13
// why 10 and 3 not showing

const resultArray = subarraySum(inputArray, sum)
console.log(resultArray)
