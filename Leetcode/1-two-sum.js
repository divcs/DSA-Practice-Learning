function two_sum(array, sum) {
  var sum = sum
  for (let j = 1; j <= array.length - 1; j++) {
    for (let i = 0; i <= array.length - 1; i++) {
      if (i !== j && array[i] + array[j] === sum) {
        // console.log('Indices of two elements in array whose sum is {sum} are: ')
        var indices = new Array()
        indices.push(i)
        indices.push(j)
        console.log(indices)

        // console.log('Element 1 at index {i}:  ' + array[i])
        // console.log('Element 2 at index {j}:  ' + array[j])
      }
    }
  }
  return indices
}

// var arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10,3]
var arr = [2, 7, 11, 15]
two_sum(arr, 9)
