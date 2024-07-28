function swap(array, a, b) {
  var temp = array[a]
  array[a] = array[b]
  array[b] = temp
}

function selection_sort(array, size) {
  // for each array element
  for (let i = 0; i < size - 1; i++) {
    // for finding the least element and then swapping with the array element
    for (let j = i + 1; j < size; j++) {
      var min_index
      // finding the least element
      if (array[j] < array[min_index]) min_index = j

      // swapping
      swap(array, min_index, i)
    }
  }
}

function printArray(array, size) {
  var i
  for (i = 0; i < size; i++) console.log(array[i] + ' ')
  // document.write(' <br>')
  // console.log(<br></br>)
}

var array = [64, 25, 12, 22, 11]
var size = 5
selection_sort(array, size)
// document.write('Sorted array: <br>')
// console.log('Sorted array: <br>')
printArray(array, size)
