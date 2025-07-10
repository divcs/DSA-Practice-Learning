function finding_missing_integer(array) {
  const starting_index = 0
  const ending_index = array.length - 1
  let missing_index
  if (ending_index === starting_index) {
    var missing_integer = array[0] + 1
    // console.log(missing_integer)
  }
  for (let i = starting_index; i <= ending_index; i++) {
    if (array[i + 1] - array[i] === 2) {
      var missing_integer = array[i] + 1
      // console.log(missing_integer)
    }
  }
  return missing_integer
}

const array = [1, 2, 3, 5, 6, 7, 8, 9, 10]
// const array = [1]
const result = finding_missing_integer(array)
console.log(result)
