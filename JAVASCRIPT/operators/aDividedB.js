let prompt = require('prompt-sync')()

let a = prompt("enter the A ")
let b = prompt("enter the B ")
let reminder,quotient;
reminder= a%b;
quotient =Math.trunc(a/b);

console.log(reminder+'\n',quotient)
