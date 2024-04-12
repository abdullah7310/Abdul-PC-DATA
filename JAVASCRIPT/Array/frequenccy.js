const prompt=require('prompt-sync')()
let arr=[2,3,2,4,6,4,3,2,6,3,5,8,7,8,7,8,9,9]
let count;
let arr1=[]
for(let i=0;i<arr.length;i++){
    count=1;
    if(arr[i]!=null){
    for(let j=i+1;j<arr.length;j++){
        
        
            if(arr[i]==arr[j]){
                count++;
                arr[j]=null;

            }
        }
    }
    if(arr[i]!=null){
         if(count>=1){
        console.log(`${arr[i]}=${count}`);
    }
   
    }
}

// let count;
// for(let i=0;i<arr.length;i++){
//     count=1;
//     if(arr[i]!=null){
//         for(let j=i+1;i<arr.length;j++){
//             if(arr[i]==arr[j]){
//                 count+=1;
//                 arr[j]=null;
//             }
//         }
        
//         }if(arr[i]!=null){
//             if(count>=1){
//                 console.log(`${arr[i]}=${count}`)
//             }
//     }
// }
// let arr=[]
// let arr2=[]
// let n=Number(prompt('enter the length of the array:-'))
// for(let i=0;i<n;i++){
//     arr[i]=Number(prompt('enter the elements:-'))

// }
// for(let i=arr.length-1;i>=0;i--){
//     arr2.push(arr[i])
// }console.log(arr2);