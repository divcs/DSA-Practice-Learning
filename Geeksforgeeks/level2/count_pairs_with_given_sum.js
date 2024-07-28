function count_pairs_with_sum(array, sum) {
  // To store pairs found
  const pairs = []
  let number_of_pairs = 0
  // Loop through the array
  for (let i = 0; i < array.length; i++) {
    for (let j = i + 1; j < array.length; j++) {
      // Start j from i + 1
      // Check if the current pair sums to the desired value
      if (array[i] + array[j] === sum) {
        console.log(
          'Pairs with sum',
          sum + ' are: ' + array[i] + ' and ' + array[j]
        )
        // Store pair in the pairs array if needed
        pairs.push([array[i], array[j]])
        number_of_pairs += 1
      }
    }
  }

  if (number_of_pairs === 0) return -1
  console.log(pairs)
  return number_of_pairs // Return pairs if needed
}

const array = [1, 2, 3, 4, 2]
const result = count_pairs_with_sum(array, 8)
console.log(result)
