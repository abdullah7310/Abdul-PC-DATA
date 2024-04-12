// let prompt = require('prompt-sync')()
// let a= prompt('enter a number ');
// let b=prompt('enter b number ')
// let temp;
// temp=a
// a=b
// b=temp
// console.log('a is :' + a)
// console.log('b is :' + b)
let prompt=require('prompt-sync')()
let a = Number(prompt('enter the value of A'))
let b = Number(prompt('enter the value of B'))
a=a+b
b=a-b
a=a-b
console.log('value of A   ' +  a );
console.log('value of B    ' + b)