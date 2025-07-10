// function timeConversion(s) {
//     const [sWithoutPeriod, period] = s.split(" ");
//     let [hours, minutes, seconds] = sWithoutPeriod.split(":");

//     if (period === "PM" && hours !== "12") {
//         hours = String(Number(hours) + 12);
//     }
//     if (period === "AM" && hours === "12") {
//         hours = "00";
//     }

//     return `${hours}:${minutes}:${seconds}`;
// }

// function timeConversion(s) {
//   // Split on space to separate time from AM/PM
//   const [sWithoutPeriod, period] = s.split(' ')

//   // Split time into components
//   let [hours, minutes, seconds] = sWithoutPeriod.split(':')

//   // Convert string hours to a number for manipulation
//   hours = parseInt(hours, 10)

//   // Adjust hours based on AM/PM
//   if (period === 'PM') {
//     if (hours < 12) {
//       hours += 12 // Convert PM hour to 24-hour format
//     }
//   } else {
//     // period === "AM"
//     if (hours === 12) {
//       hours = 0 // Midnight case
//     }
//   }

//   // Format hours back to string for final output, ensuring two digits
//   const formattedHours = String(hours).padStart(2, '0')

//   // Return the final time in 24-hour format
//   return `${formattedHours}:${minutes}:${seconds}`
// }

// correct one
function timeConversion(s) {
  // Split the input string into the time part and the period (AM/PM)
  const [time, period] = [s.slice(0, -2), s.slice(-2)] // Extract time without AM/PM and the period

  // Split the time into components: hours, minutes, and seconds
  let [hours, minutes, seconds] = time.split(':')

  // Convert hours to a number for calculations
  hours = parseInt(hours, 10)

  // Adjust hours based on AM/PM
  if (period === 'PM' && hours !== 12) {
    // If PM and not 12, add 12 to convert to 24-hour format
    hours += 12
  } else if (period === 'AM' && hours === 12) {
    // If AM and it's 12 (midnight), set hours to 0
    hours = 0
  }

  // Format hours as two digits
  const formattedHours = String(hours).padStart(2, '0')

  // Return the converted time in 24-hour format
  return `${formattedHours}:${minutes}:${seconds}`
}
