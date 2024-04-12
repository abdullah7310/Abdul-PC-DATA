const prompt=require('prompt-sync')()

let n=prompt("enter the number -->")
let sum=0;
for(let i=1; i<=n;i++){
    if(i%2!==0){
        sum=sum+i;

    }
}
console.log("sum of odd number is = ",sum)