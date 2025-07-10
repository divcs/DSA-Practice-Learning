process.stdin.resume()
process.stdin.setEncoding('ascii')

var input_stdin = ''
var input_stdin_array = ''
var input_currentline = 0

process.stdin.on('data', function (data) {
  input_stdin += data
})

process.stdin.on('end', function () {
  input_stdin_array = input_stdin.split('\n')
  main()
})

// Reads complete line from STDIN
function readLine() {
  return input_stdin_array[input_currentline++]
}

function main() {
  var i = 4 // Initial integer
  var d = 4.0 // Initial double
  var s = 'HackerRank ' // Initial string

  // Declare second integer, double, and String variables.
  var j // Second integer
  var e // Second double
  var t // Second string

  // Read and save an integer, double, and String to your variables.
  j = parseInt(readLine()) // Read second integer
  e = parseFloat(readLine()) // Read second double
  t = readLine() // Read second string

  // Print the sum of both integer variables on a new line.
  console.log(i + j) // Sum of integers

  // Print the sum of the double variables on a new line.
  console.log((d + e).toFixed(1)) // Sum of doubles, formatted to 1 decimal place

  // Concatenate and print the String variables on a new line
  // The 's' variable above should be printed first.
  console.log(s + t) // Concatenated string
}
