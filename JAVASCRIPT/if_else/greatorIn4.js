const prompt=require('prompt-sync')()
let a=Number(prompt('enter the value of a '))
let b=Number(prompt('enter the value of b '))
let c=Number(prompt('enter the value of c '))
let d=Number(prompt('enter the value of d '))
if(a>b){
    if(a>c){
        if(a>d){
            console.log('a is greator '+a);
        }else{
            console.log('d is greator '+d);
        }
    }else if(c>d){
        console.log('c is greator '+c);
    }else{
        console.log('d is greator '+d)
    }
}else if(b>c){
    if(b>d){
        console.log('b is greator '+b)
    }else{
        console.log('d is greator'+d);
    }
}else if(c>d){
    console.log('c is greator '+c);
}else{
    console.log('d is greator '+d);
}