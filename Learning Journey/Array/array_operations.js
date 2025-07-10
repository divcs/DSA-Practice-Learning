// 1. Array reverse

// function array_reverse(array) {
//   var reversedArray = new Array()

//   for (let i = array.length - 1; i >= 0; i--) {
//     reversedArray.push(array[i])
//   }

//   return reversedArray
// }

// var arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// var reverse = array_reverse(arr)

// console.log('Original array:' + arr)
// console.log('Reversed array:' + reverse)

// 2.  max element

// function maxElement(array) {
//   var max_element = array[0]

//   for (let i = 1; i < array.length; i++) {
//     if (array[i] >= max_element) {
//       max_element = array[i]
//     }
//   }
//   return max_element
// }

// var arr = [1, 2, 3, 4, 5, 5, 6, 10, 9, 60, 90]
// var maximumElement = maxElement(arr)

// console.log(maximumElement)

// 3. min element

// function minElement(array) {
//   var min_element = array[0]

//   for (let i = 1; i < array.length; i++) {
//     if (array[i] <= min_element) {
//       min_element = array[i]
//     }
//   }
//   return min_element
// }

// var arr = [1, 2, 3, 4, 5, 5, 6, 10, 9, 60, 90, 0]
// var minimumElement = minElement(arr)

// console.log(minimumElement)

// searching

function searching(array, search_element) {
  var search_element = search_element
  var set_flag = false

  for (let i = 0; i <= array.length - 1; i++) {
    if (array[i] === search_element) {
      set_flag = true
      console.log('Search successful!')
      console.log(`Search element {search_element} found at index ` + i)
    }
  }
  if (set_flag == false) {
    console.log('Search element not found!')
  }
}

var array = [1, 2, 3, 4, 5, 5, 8, 39, 56, 70]
var search_element = 4
searching(array, search_element)

// remove duplicates
// function remove_duplicates(array) {
//   // for each element traverse the array to find it's duplicates by comparing the first element with others

//   var duplicates_array = new Array()
//   var duplicate_element;
// foreach(element of array){
//   for(let i=0; i<array.length-1; i++){
// if(arr[i]===arr[i+1]){
//   duplicates_array.push(arr[i+1])
//   // array.pop(array[i+1])
// }
//   }}

// }

// sort and search

// adding

// deleting
