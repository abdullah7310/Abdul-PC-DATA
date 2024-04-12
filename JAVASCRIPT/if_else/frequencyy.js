const prompt= require('prompt-sync')()
let a = Number(prompt("enter first no. :- "))
let b = Number(prompt("enter second no. :- "))
let c = Number(prompt("enter third no. :- "))
let d = Number(prompt("enter fourth no. :- "))
let e = Number(prompt("enter fifth no. :- "))

let fr1 = 1,fr2 = 1, fr3 = 1, fr4 = 1, fr5 = 1;
if (a===b){
    fr1++
    b=null;
    if(a===c){
        fr1++
        c=null
        if(a===d){
            fr1++
            d=null
            if(a===e){
                fr1++;
                e=null;
            }
        }
    }
}
else if(a===c){
    fr1++;
    c=null;
    if(a===d){
        fr1++;
        d=null;
        if(a===e){
            fr1++;
            e=null;
        }
    }
}else if(a===d){
    fr1++;
    d=null;
    if(a===e){
        fr1++;
        e=null;
    }
}else if(a===e){
    fr1++;
    e=null;
}
else if(b!=null){
    if(b===c){
        fr2++;
        c=null;
        if(b===d){
            fr2++;
            d=null;
            if(b===e){
                fr2++;
                e=null;
            }
        }
    }
}else if(c!=0){
    if(c===d){
        fr3++;
        d=null;
        if(c===e){
            fr3++;
            e=null;
        }
    }
}else if(d!=0){

    if(d===e){
        fr4++;
        e=null;

    }
}else if(e!=0){
    fr5=1;
}
    console.log(`${a>>>fr1}`)


