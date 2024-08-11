function longestCommonPrefix(v) {
  if (v.length === 0) return ''

  v.sort()
  let first = v[0]
  let last = v[v.length - 1]
  let ans = ''

  for (let i = 0; i < Math.min(first.length, last.length); i++) {
    if (first[i] !== last[i]) {
      return ans
    }
    ans += first[i]
  }

  return ans
}

// Example usage:
const strings = ['flower', 'flow', 'flight']
console.log(longestCommonPrefix(strings)) // Output: "fl"
