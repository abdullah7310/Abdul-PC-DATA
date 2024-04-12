const prompt=require('prompt-sync')()
let a =Number(prompt('enter the value of a  '))
if(a===0){
    console.log('zero');
}else if(a<0){
    console.log('negative');
}else{
    console.log('positive');
}