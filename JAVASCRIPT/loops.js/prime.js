const prompt=require('prompt-sync')()

// let n=Number(prompt('enter the number -->'));
// let count=0;
// for(i=0;i<=n;i++){
//     if(n%i==0){
//         count+=1;
//     }
// }
// if(count==2){
//     console.log('prime')
// }else{
//     console.log('not prime')
// }

let n=Number(prompt('enter the number -->'));
let s=Number(prompt('enter the starting point'))
let count=0;
for(i=s;i<=n;i++){
    
        if(n%i==0){
        count+=1;
    }if(count==2){
    console.log(i)
}
    }
    

