const prompt=require('prompt-sync')()
let n=Number(prompt('enter the number'))
let rev=0;
let pal=n;
for(let i=0;n>0;i++){
    let mod=n%10
    rev=rev*10+mod
    n=Math.floor(n/10)
}if(rev==pal){
    console.log('its pallidrome')
}else{
    console.log('its not a pallindrome')
}