function divisibleSumPairs(n, k, ar) {
  // Write your code here
  let subarray = []
  let pairs = 0
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      if ((ar[i] + ar[j]) % k === 0) {
        pairs = pairs + 1
        subarray.push([i, j])
      }
    }
  }
  return pairs
}

const ar = [1, 2, 3, 4, 5, 6]
// const arr = [1, 3, 2, 6, 1, 2]
const result = divisibleSumPairs(6, 5, ar)
console.log(result)
