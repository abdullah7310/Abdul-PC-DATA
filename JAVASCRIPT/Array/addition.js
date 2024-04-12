
// const prompt =require('prompt-sync')()
// let arr1=[1,2,3,4,5]
// let arr2=[3,6,7,8,9]
// // let arr3=[...arr1,...arr2]
// // console.log(arr3);
// // let arr3=[]
// // for(let i=0;i<arr1.length;i++){
// //     arr3[i]=arr1[i];
// // }
// // for(let i=0;i<arr2.length;i++){
// //     arr3.push(arr2[i])
// // }
// // console.log(arr3);
// let arr3=[]
// for(let i=0;i<arr1.length;i++){
//     arr3[i]=(arr1[i]+arr2[i])
// }console.log(arr3);

// const prompt=require('prompt-sync')()
// let arr1=[1,2,3,4,5]
// let arr2=[5,6,7,8,2]
// let arr3=[]
// // for(let i=0;i<arr1.length;i++){
// //     arr3[i]=arr1[i]+arr2[i];
// // }
// for(let i=0;i<arr1.length;i++){
//     arr3.push(arr1[i]-arr2[i])
// }
// console.log(arr3);

/**duplicate find .................................................*/
const prompt=require('prompt-sync')()
// let arr1=[2,3,4,5,3]
// let dup;
// for(let i=0;i<arr1.length;i++){
//         count=0;
//     for(let j=i+1;j<arr1.length;j++){

//         if(arr1[i]!=null){
//             if(arr1[i]==arr1[j]){
//                 count++;
//                 arr1[j]=null;
//             }
//         }
//     }if(count>=1){
//         console.log(arr1[i])
//     }
// }


/** <<<<<<<<<<<<<<<<<<<finding>>............. duplicate */
// let arr1=[1,2,3,4,5]
// let arr2=[2,4,3,6,7]
// let dup;
// let aar3=[]
// for(let i=0;i<arr1.length;i++){
//     for(let j=0;j<arr2.length;j++){
//         if(arr1[i]!=null){
//             if(arr1[i]==arr2[j]){
//                 aar3.push(arr2[j])
                
//                 arr2[j]=null
//             }
//         }
//     }
// }
// console.log(aar3);


let arr1=[]
let n=Number(prompt('enter the length of the array'))
for(let i=0;i<n;i++){
    arr1[i]=Number(prompt('enter the elements>>>>>>>>>>>>>'))
}
let arr2=[]
for(let i=0;i<n;i++){
    arr2[i]=Number(prompt('enter the secondd elements>>>>>>>>>'))
}
// let arr2=[3,8,9,3,7]

let arr3=[];
for(let i=0;i<arr1.length;i++){
    for(let j=0;j<arr2.length;j++){
        if(arr1[i]!=null){
            if(arr1[i]==arr2[j]){
                arr3.push(arr2[j])
                arr2[j]=null
            }
        }
    }
}console.log(arr3);
