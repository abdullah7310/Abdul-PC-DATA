const prompt=require ('prompt-sync')()

let a = Number(prompt('enter the number  '))
let b = Number(prompt('enter the number  '))
let c,d, e
c=a-1;
d=Math.trunc(c/b) 
e=d*b
console.log(e)