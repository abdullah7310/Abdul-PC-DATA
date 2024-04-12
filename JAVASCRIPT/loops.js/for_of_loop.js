const prompt=require('prompt-sync')()

let str="Abdullah"
let size=0;
for(let i of str){
    console.log('i = ',i);
    size++;
}
console.log('number of letter = ',size);