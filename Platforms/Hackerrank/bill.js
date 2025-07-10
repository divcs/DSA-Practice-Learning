function solve(meal_cost, tip_percent, tax_percent) {
    // Calculate the tip amount
    const tip = (meal_cost * tip_percent) / 100;
    
    // Calculate the tax amount
    const tax = (meal_cost * tax_percent) / 100;
    
    // Calculate the total cost
    const totalCost = meal_cost + tip + tax;
    
    // Round the total cost to the nearest integer
    const roundedTotalCost = Math.round(totalCost);
    
    // Print the rounded total cost
    console.log(roundedTotalCost);
}

// Example usage:
const meal_cost = 100;
const tip_percent = 15;
const tax_percent = 8;

solve(meal_cost, tip_percent, tax_percent); // Output: 123
