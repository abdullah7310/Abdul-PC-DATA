let prompt = require('prompt-sync')();
let a = Number(prompt('enter the number'))
let b = Number(prompt('enter the number'))
let sum,sub,mult,div,expo,modulo;
sum=a+b;
sub=a-b;
mult=a*b;
div= (a/b) ;
newdiv=div.toPrecision(3);
modulo = a%b;
expo=a**b;
console.log(sum,sub,mult,newdiv,expo,modulo);