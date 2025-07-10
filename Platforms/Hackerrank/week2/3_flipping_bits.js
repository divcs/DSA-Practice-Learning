function flippingBits(n) {  
    // The maximum value for a 32-bit unsigned integer  
    const maxUnsigned32Bit = 4294967295;  
    
    // Flipping the bits by subtracting n from the max value  
    return maxUnsigned32Bit - n;  
}  

// Example usage:  
const numQueries = 3; // Number of queries  
const queries = [1, 0, 4294967295]; // Example queries  

for (let i = 0; i < numQueries; i++) {  
    console.log(flippingBits(queries[i])); // Process each query  
}