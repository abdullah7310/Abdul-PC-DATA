let prompt = require('prompt-sync')()

let a = Number(prompt('enter the number'))
let last_digit;
last_digit=a%10;
console.log(last_digit)