const prompt=require('prompt-sync')()
let num1=Number(prompt('enter the first number -->'))
let num2=Number(prompt('enter the second number -->'))
let num3=Number(prompt('enter the third number -->'))
let num4=Number(prompt('enter the fourth number -->'))
let num5=Number(prompt('enter the fifth number -->'))
let freq1=0,freq2=0,freq3=0,freq4=0,freq5=0;

if(num1===num2){
    freq1++;
    freq2++;
} if(num1===num3){
    freq1++;
    freq3++;
} if(num1===num4){
    freq1++;
    freq4++;
} if(num1===num5){
    freq1++;
    freq5++
} if(num2===num3){
    freq2++;
    freq3++;
} if(num2===num4){
    freq2++;
    freq4++;
} if(num2===num5){
    freq2++;
    freq5++;
} if(num3===num4){
    freq3++;
    freq4++;
} if(num3===num5){
    freq3++;
    freq5++;
}if(num4===num5){
    freq4++;
    freq5++
}
console.log(num1+'---',freq1);
console.log(num2+'---',freq2);
console.log(num3+'---',freq3);
console.log(num4+'---',freq4);
console.log(num5+'---',freq5);