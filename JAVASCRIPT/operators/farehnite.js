const prompt = require('prompt-sync')()
let celsius = Number(prompt('enter the temperature in celsius'))
let farhenite;
farhenite= (9/5*celsius)+32;
console.log(farhenite)