// peak element not smaller than it's neighbors

function peakElement(array) {
  for (let i = 0; i <= array.length - 1; i++) {
    var peakElementCount = 0
    if (i == 0) {
      if (array[i] >= array[i + 1] && array[i] >= array[i + 2]) {
        peakElementCount += 1
        console.log(
          'Peak element which is larger than its neighbors is at index ' +
            i +
            ' and the element is: ' +
            array[i]
        )
      }
    }
    if (i == array.length - 1) {
      if (array[i] >= array[i - 1] && array[i] >= array[i - 2]) {
        peakElementCount += 1
        console.log(
          'Peak element which is larger than its neighbors is at index ' +
            i +
            ' and the element is: ' +
            array[i]
        )
      }
    }
    if (array[i] >= array[i - 1] && array[i] >= array[i + 1]) {
      peakElementCount += 1
      console.log(
        'Peak element which is larger than its neighbors is at index ' +
          i +
          ' and the element is: ' +
          array[i]
      )
    }
  }
}

array = [1, 1, 1, 2, 1, 1, 1] // peak element at indices:0,1,3,5,6
// array=[1,2,3]          // peak element at index:2

peakElement(array)
