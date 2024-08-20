function count_digits(num) {
  let count = 0

  while (num > 0) {
    count = count + 1

    num = Math.floor(num / 10)
    console.log(num)
  }
  return count
}

const number = 3356773
const digits = count_digits(number)
console.log(digits)
