function sorting_array(array) {
  let sortedArray = []

  while (array.length > 0) {
    let min = Math.min(...array)
    let index = array.indexOf(min)

    sortedArray.push(array.splice(index, 1)[0])
  }
  return sortedArray
}

// array = [0, 2, 1, 2, 1, 0, 0, 0, 1]
array = [-2, -1, -2, -5, 7, -3, 4, 5, 6, 0, -3]
sorted_array = sorting_array(array)
console.log(sorted_array)
