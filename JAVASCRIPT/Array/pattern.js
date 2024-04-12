const prompt=require('prompt-sync')()
// let array=[2,3,5,3,2]
// for(let i=0;i<array.length;i++){
//     let string=''
//     for(let j=0;j<array[i];j++){
//         string=string+'>'

//     } console.log(string);
// }

let arr=[]
let  n=Number(prompt('enter the number of length'))
for(let i=0;i<n;i++){
    arr[i]=Number(prompt('enter the elements'))
}
for(let i=0;i<arr.length;i++){
    string=''
    for(let j=0;j<arr[i];j++){
        string=string+'>'
    }console.log(string)
}