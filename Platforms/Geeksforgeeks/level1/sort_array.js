// function bubbleSort(arr) {
//     let len = arr.length;

//     for (let i = 0; i < len; i++) {
//         for (let j = 0; j < len - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements
//                 let temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     return arr;
// }

// let numbers = [4, 2, 7, 1, 5];
// console.log(bubbleSort(numbers)); // Output: [1, 2, 4, 5, 7]


function sortingArray(array) {
  let sortedArray = []

  while (array.length > 0) {
    let min = Math.min(...array)
    let index = array.indexOf(min)
    sortedArray.push(array.splice(index, 1)[0])
  }
  return sortedArray
}

let array = [2, 4, 1, 6, 8, 7, 9]
console.log(sortingArray(array))
