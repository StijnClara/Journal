// Kelvin = forecast
const kelvin = 293;
// Celsius = 273 less than Kelvin
const celsius = kelvin - 273;
// Fahrenheit is calculated this way 
let fahrenheit = celsius * (9/5) + 32;
// to round of decimals we use a .floor function
fahrenheit = Math.floor(fahrenheit);

// output
console.log(`The temperature is ${celsius} degrees Celsius.`);
console.log(`The temperature is ${fahrenheit} degrees Fahrenheit.`);
