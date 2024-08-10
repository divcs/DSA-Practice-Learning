// METHOD 1

// function isPalindrome(num) {
//   let x = num
//   let isPalindrome = false
//   if (x < 0) return isPalindrome

//   x = String(x)
//   rev = x.split('').reduce((acc, char) => char + acc, '')

//   if (num == rev) isPalindrome = true

//   return isPalindrome
// }

// const number = -121
// console.log(isPalindrome(number))

// METHOD 2

function palindromeTest(num) {
  let x = num
  let reversed = 0
  if (x < 0) return false

  while (x != 0) {
    reversed = reversed * 10 + (x % 10)
    x = x / 10
  }
  if (num != reversed) {
    return false
  }
  return true
  // return reversed
}

const number=12121
console.log(palindromeTest(number))
// console.log(output);
// int rev=0;
// if(x<0){
// return false;
// }
// while(x!=0){
// rev= rev*10 + x%10;
// x=x/10;
// }
// if(num!=rev){
// return false;
// }
// return true;
