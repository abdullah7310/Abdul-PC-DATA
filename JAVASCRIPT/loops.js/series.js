const prompt=require('prompt-sync')()
let n=Number(prompt('enter the number  -->'))
let sum=0;
for(let i=1;i<=n;i++){
    sum+=1/i;
}
let sumis=sum.toFixed(2)
console.log('sum is = -->',sumis);