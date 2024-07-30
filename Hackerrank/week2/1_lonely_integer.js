// function lonelyinteger(a) {
//   // Write your code here
//   let array = {}

//   for (let i = 0; i < a.length; i++) {

//     let lonely_integer
//     if (array.has(a[i])) {
//       break
//     } else lonely_integer = a[i]
//   }
// }

// const array = [1, 2, 3, 4, 3, 2, 1]
// const res = lonelyinteger(array)
// console.log(res)

function lonelyinteger(a) {
  let lonely_int
  for (let i = 0; i < a.length; i++) {
    let j
    for (j = 0; j < a.length; j++) {
      if (i != j && a[i] === a[j]) {
        break
      }
    }
    if (j === a.length) lonely_int = a[i]
  }
  return lonely_int
}
const array = [1, 2, 3, 4, 3, 2, 1]
const res = lonelyinteger(array)
console.log(res)
