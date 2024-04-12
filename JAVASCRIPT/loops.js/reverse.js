const prompt=require('prompt-sync')()

let n = Number(prompt('enter the number -->'))
let reverse=0,m;
for(;n>0;){
    m=n%10;

    n=Math.floor(n/10)
    reverse=(reverse*10)+m;
}
console.log(reverse);
