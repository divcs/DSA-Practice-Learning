function breakingRecords(scores) {
  // Write your code here
  let breaking_records = []
  var minimum = scores[0]
  var maximum = scores[0]
  var most_points = 0
  var least_points = 0

  for (let i = 0; i < scores.length; i++) {
    if (scores[i] > minimum && scores[i] > maximum) {
      maximum = scores[i]
      most_points++
    }

    if (scores[i] < minimum && scores[i] < maximum) {
      minimum = scores[i]
      least_points++
    }
  }

  breaking_records[0] = most_points
  breaking_records[1] = least_points

  return breaking_records
}

const scores = [12, 24, 10, 24]
const result = breakingRecords(scores)
console.log(result)
