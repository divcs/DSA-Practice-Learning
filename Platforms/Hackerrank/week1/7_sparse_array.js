// function matchingStrings(strings, queries) {
//   // Create an array to hold the results
//   const results = []

//   // Iterate over each query string
//   for (let i = 0; i < queries.length; i++) {
//     const query = queries[i]
//     // Count occurrences of the current query in the strings array
//     const count = strings.filter((str) => str === query).length
//     // Append the count to the results
//     results.push(count)
//   }

//   return results
// }

// // Example usage:
// const strings = ['aba', 'baba', 'aba', 'xzxb']
// const queries = ['aba', 'xzxb', 'ab']

// // Get the results
// const output = matchingStrings(strings, queries)

// // Print the output
// console.log(output) // Output: [2, 1, 0]

function matchingStrings(strings, queries) {
  const results = new Array(queries.length).fill(0) // Initialize the results array with 0s

  // Iterate over the queries
  for (let j = 0; j < queries.length; j++) {
    const query = queries[j]
    // Count occurrences of the current query in the strings array
    for (let i = 0; i < strings.length; i++) {
      if (strings[i] === query) {
        results[j]++
      }
    }
  }

  return results
}

// Example usage:
const strings = ['aba', 'baba', 'aba', 'xzxb']
const queries = ['aba', 'xzxb', 'ab']

const results = matchingStrings(strings, queries)
console.log(results) // Output: [2, 1, 2]
