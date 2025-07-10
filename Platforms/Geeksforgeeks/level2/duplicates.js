// function finding_duplicates(array) {
//   let isduplicate = false
//   let duplicates = []
//   for (let i = 0; i < array.length; i++) {
//     for (let j = array.length - 1; j >= 0; j--) {
//       if (array[i] === array[j] && i !== j) {
//         isduplicate = true
//         let updated = duplicates.push(array[i])
//         console.log('Updated:', +updated)
//       }
//     }
//   }
//   // console.log(duplicates.sort())
//   // duplicates.sort()
//   // duplicates = new Set()
//   let sorted_duplicates = duplicates.sort()
//   sorted_duplicates = new Set(sorted_duplicates)
//   return sorted_duplicates
// }

const array = [1, 2, 4, 2, 1, 5, 6, 5, 5, 7, 3, 3]
const result = finding_duplicates(array)
console.log(result)

function finding_duplicates(array) {
  const seen = new Set()
  const duplicates = new Set()

  for (let i = 0; i < array.length; i++) {
    if (seen.has(array[i])) {
      duplicates.add(array[i])
    } else {
      seen.add(array[i])
    }
  }

  return Array.from(duplicates).sort()
}

// const array = [1, 2, 4, 2, 1, 5, 6, 5, 5]
// const result = finding_duplicates(array)
// console.log(result) // [1, 2, 5]
