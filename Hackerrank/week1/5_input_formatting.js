function processData(input) {
  //Enter your code here
  let [operation, literal, name] = [
    input.slice(0, 1),
    input.slice(2, 3),
    input.slice(4),
  ]
  // console.log(operation, literal, name)
  // console.log(operation)
  // console.log(literal)
  console.log(name)
  name = String(name)

  //   if (operation === 'S' && literal === 'M') {
  //     name = name.toLowerCase().slice(0, -2)
  //   }

  //   if (operation === 'S' && literal === 'C') {
  //     console.log(splitCamelCase(name).join(' '))
  //   }
  //   if (operation === 'S' && literal === 'V') {
  //     // splitCamelCase(name).join(' ')
  //     console.log(splitCamelCase(name).join(' '))
  //   }

  //   if (operation === 'C' && literal === 'M') {
  //     name =
  //       name
  //         .split(' ') // Split the string into words

  //         .map((word, index) => {
  //           if (index === 0) {
  //             return word.toLowerCase()
  //           }
  //           return word.charAt(0).toUpperCase() + word.slice(1).toLowerCase()
  //         })
  //         .join('') + '()' // Join the words without spaces
  //   }
  //   if (operation === 'C' && literal === 'C') {
  //     return name
  //       .split(' ') // Split the string into words
  //       .map((word) => word.charAt(0).toUpperCase() + word.slice(1).toLowerCase()) // Capitalize the first letter of each word
  //       .join('')
  //   }

  //   if (operation === 'C' && literal === 'V') {
  //   }
}

function splitCamelCase(camelCaseStr) {
  return camelCaseStr
    .replace(/([A-Z])/g, ' $1') // Insert space before uppercase letters
    .trim() // Remove any leading space
    .toLowerCase() // Convert everything to lowercase
    .split(' ') // Split into words
}
// const input_sm = 'S;M;plasticCup()'
// const input_sc = 'LargeSoftwareBook'
// const input_sv = 'S;V;plasticCup'

// const input_cm = 'C;M;white sheet of paper'
const input_cc = 'C;C;coffee machine'

// const result_sm = processData(input_sm)
// const result_sc = processData(input_sc)
// const result_sv = processData(input_sv)

// const result_cm = processData(input_cm)
const result_cc = processData(input_cc)
// console.log(input)

// function toPascalCase(str) {
//   return str
//     .split(' ') // Split the string into words
//     .map((word) => word.charAt(0).toUpperCase() + word.slice(1).toLowerCase()) // Capitalize each word
//     .join('') // Join the words without spaces
// }

// const input = 'coffee machine' // Input string
// const output = toPascalCase(input) // Convert to PascalCase
// console.log(output) // Outputs: CoffeeMachine

function toCamelCase(str) {
  return str
    .split(' ') // Split the string into words
    .map((word, index) => {
      // Capitalize the first letter of each word except the first
      if (index === 0) {
        return word.toLowerCase() // Keep the first word in lowercase
      }
      return word.charAt(0).toUpperCase() + word.slice(1).toLowerCase() // Capitalize the rest
    })
    .join('') // Join the words without spaces
}

const input = 'mobile phone' // Input string
const output = toCamelCase(input) // Convert to camelCase
console.log(output)
