const prompt=require('prompt-sync')()
let a=Number(prompt('enter the value of a '))
let b=Number(prompt('enter the value of b '))
let c=Number(prompt('enter the value of c '))
let d=Number(prompt('enter the value of d '))
let max=0,smax=0,tmax=0;
// if(a>b){
//     max=a;
//     smax=b;
// }else{
//     max=b;
//     smax=a;
// }if(max>c){
//     if(smax>c){
//         smax=smax;
//         tmax=c;
//     }
//     else{
//         tmax=smax;
//         smax=c;
//     }
// }else{
//     tmax=smax;
//     smax=max;
//     max=c

// }
// if(max>d){
//     if(smax>d){
//         if(tmax>d){
//             tmax=tmax;
//         }else{
//             tmax=d;
//         }
//     }else{
//         tmax=smax;
//         smax=d;
//     }
// }else{
//     tmax=smax;
//     smax=max;
//     max=d;
// }
// console.log(tmax);

if(a>b){
    max=a;
    smax=b;
}else{
    max=b;
    smax=a;
}
if(max>c){
    if(smax>c){
        smax=smax;
        tmax=c;
    }else{
        tmax=smax;
        smax=c;
    }
}else{
    tmax=smax;
    smax=max;
    max=c;
}
if(max>d){
    if(smax>d){
        if(tmax>d){
            tmax=tmax;
        }else{
            tmax=d;
        }
    }else{
        tmax=smax;
        smax=d;
    }
}else{
    tmax=smax;
    smax=max;
    max=d;
}

console.log(tmax)