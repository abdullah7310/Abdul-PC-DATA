// const prompt=require('prompt-sync')()
//  let n=Number(prompt('enter the number -->'))
//  let sum=0;
//  for(i=1;i<n;i++){
//     if(n%i==0){
//         sum+=i
//     }
//  }
// if(sum==n){
//     console.log('perfect number');
// }else{
//     console.log('not a perfect number');
// }

const prompt=require('prompt-sync')()
let n=prompt(Number('enter a number :-'))
let perfect=0;
for(let i=1;i<=n;i++){
    if(n%i===0){
        perfect+=i
    }
}
if(perfect===n){
    console.log('perfect number');
}else {
    console.log('not a perfect  number');
}