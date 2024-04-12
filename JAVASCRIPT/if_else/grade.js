const prompt=require('prompt-sync')();

let a= Number(prompt('enter the marks'))
if(a>40 && a<=50){
    console.log('Grade A');
} else if(a>50 && a<=60){
    console.log('Grade B')
}else if(a>60 && a<=100){
    console.log('Grade A')
}else {
    console.log('Fail')
}

