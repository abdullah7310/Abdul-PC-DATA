const  prompt=require('prompt-sync')()
let arr=[2,3,3,4,5,7,6,7]
let arr1=[]
// for(let i=arr.length-1;i>=0;i--){
//     arr1.push(arr[i])
// }
// console.log(arr1)
for(let i=0;i<arr.length;i++){
    for(let j=i+1;j<arr.length;j++){
        if(arr!=null){
            if(arr[i]==arr[j]){
                arr1.push(arr[j])
                arr[j]=null
            }
        }
    }
}console.log(arr1);