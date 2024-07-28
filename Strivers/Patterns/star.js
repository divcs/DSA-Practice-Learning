// star_pattern_1_square(2)

// function star_pattern_1_square(size) {
//   for (let i = 0; i < size; i++) {
//     for (let j = 0; j < size; j++) {
//       console.log('*')
//     }
//     console.log('\n')
//   }
// }

// star_pattern_2()

// function star_pattern_2() {
//   for (let i = 0; i < 5; i++) {
//     for (let j = i +1 ; j < 5; i++) {
//       console.log('*')
//     }
//     console.log('\n')
//   }
// }

// function star_pattern_2(size) {
//   for (let i = 0; i < size; i++) {
//     for (let j = 0; j < i; j++) {
//       console.log(' ')
//     }
//     for (let j = 0; j < 2 * size - (2 * i + 1); j++) {
//       console.log('*')
//     }
//     for (let j = 0; j < i; j++) {
//       console.log(' ')
//     }
//   }
// }
// star_pattern_2(5)

function star_pattern_3(size) {
  for (let i = 0; i < size; i++) {
    for (let j = 0; j < size - i - 1; j++) {
      console.log(' ')
    }
    for (let j = 0; j < 2 * i + 1; j++) {
      console.log('*')
    }
    for (let j = 0; j < size - i - 1; j++) {
      console.log(' ')
    }
  }
  for (let i = 0; i < size; i++) {
    for (let j = 0; j < i; j++) {
      console.log(' ')
    }
    for (let j = 0; j < 2 * size - (2 * i + 1); j++) {
      console.log('*')
    }
    for (let j = 0; j < i; j++) {
      console.log(' ')
    }
  }
}
star_pattern_3(5)