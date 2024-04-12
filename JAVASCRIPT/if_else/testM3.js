const input = require('readline-sync')
let n1= input.questionInt('enter n1')
let n2=input.questionInt('enter n2')
let n3=input.questionInt('enter n3')
let d;
if(n1===n2){
    if(n1===n3){
        console.log(n1*n2*n3);
    }else{
        d=n1+n2;
        console.log(d%n3);
    }
}else if(n2===n3){
    d=n2+n3;
    console.log(d%n1);   
}else if(n1===n3){
    d=n1+n3;
    console.log(d%n2);
}else if(n1>n2){
    if(n1>n3){
        
    }
}