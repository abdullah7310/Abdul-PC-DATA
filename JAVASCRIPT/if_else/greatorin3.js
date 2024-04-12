const prompt=require('prompt-sync')()
let a = prompt('enter the value of a  ');
let b = prompt('enter the value of b  ');
let c = prompt('enter the value of c  ');
if(a>b){
    if(a>c){
        console.log('a is greator '+a);
    }else if(b>c){
        console.log('b is greator '+b)
    }else{
        console.log('c is greator '+c);
    }
}else if(b>c){
    console.log('b is greator '+b);
}else{
    console.log('c is greator '+c)
}