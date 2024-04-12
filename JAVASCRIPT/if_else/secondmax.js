let prompt=require('prompt-sync')()
let a=Number (prompt('enter the value of a  '));
let b=Number (prompt('enter the value of b  '));
let c=Number (prompt('enter the value of c  '));
let max,smax;
// if((a>=b && a<=c)  ||(a>=c && a<=b)){
//     smax=a;
// }else if((b>=a && b<=c) || (b>=c && b<=a)){
//     smax=b;
// }else{
//     smax=c
// }
// console.log(smax);

if(a>b){
    max=a;
    smax=b
}else{
    max=b;
    smax=a;
}if(max>c){
    if(smax>c){
        smax=smax;
    }else{
        smax=c;
    }
}else{
    smax=max;
    max=c;
}
console.log(smax);