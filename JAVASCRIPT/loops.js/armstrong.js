const prompt=require('prompt-sync')()
let n=Number(prompt('enter the number'))
let count=0;
let m=n;
let s=n;
while(n>0){
    n%10;
    count=count+1
    n=Math.floor(n/10)
}

let sum=0;
while(m>0){
   let k= m%10;
    
    sum=sum+k**count;
    m=Math.floor(m/10)

}if(s==sum){
    console.log('yes it is armmstrong')
}else{
    console.log('no it is not')
}
