
// let n=20
// let array=[]

// for(let i=0;i<n;i++){
//     array[i]=i+1
// }
// for(let i=0;i<n;i++){
//     console.log(array[i])
// }


// const  input=require('prompt-sync')()
// let array=[]
// let N=Number(input("Enter the array length:"))
// for(let i=0;i<N;i++){
//     let elements=Number(input("Enter the elements:"))
//     array[i]=elements
// }
// for(let i=0;i<N;i++){
//     console.log(array[i])
// }

const input=require('prompt-sync')()
let array=[]
let n=Number(input('enter the array length'))
let s=Number(input('enter the starting'))
let p=0
for(let i=s;i<n;i++){
    // if(i%2 == 0){
        array[p]= i;
        p++
    // }
}
// for(let i=0;i<n;i++){
    console.log(array);
// }