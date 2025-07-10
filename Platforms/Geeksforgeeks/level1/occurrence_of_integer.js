function occurrences(array, integer) {
  count = 0
  for (let i = 0; i < array.length; i++) {
    if (integer == array[i]) {
      count += 1
    }
  }

  console.log(
    'The number of occurrences of ' + integer + ' is ' + count + ' times'
  )
  if (count == 0) {
    console.log('No such integer was found')
  }
}

arr = [1, 2, 3, 1, 2, 3, 1, 3, 5, 6, 3, 1, 56, 6]
occurrences = occurrences(arr, 56)
