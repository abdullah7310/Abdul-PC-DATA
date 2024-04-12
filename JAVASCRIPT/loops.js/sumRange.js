const prompt=require('prompt-sync')()
let m=Number(prompt('enter the value of m -->'))
let n=Number(prompt('enter the value of n -->'))
let sum=0;
for(let i=m;i<=n;i++){
    sum=sum+i;
}
console.log('sum is = ',sum);